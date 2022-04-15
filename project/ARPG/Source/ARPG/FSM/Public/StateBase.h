// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

template<class C>
class ARPG_API StateBase
{
public:

	virtual void Action(C* Context);

	virtual bool TryTranitionTo(UClass* Type, C* Context);
	virtual bool CanTransition(C* Context) const;

	virtual void Tick(float DeltaSeconds, C* Context);

	virtual FString GetName() const = 0;

protected:

	FDateTime GetStartTime() const;

private:

	FDateTime StartTime;
};

template <class B>
class ARPG_API StateCreatorBase
{
public:

	StateCreatorBase(const StateCreatorBase&) = default;

	virtual ~StateCreatorBase() = default;

	virtual B* Create() = 0;

	UClass* GetType() const;

protected:

	StateCreatorBase(UObject* Outer, UClass* Type);

	UObject* Outer;
	UClass* Type;
};

template <class T, class B>
class ARPG_API StateCreator : public StateCreatorBase<B>
{
public:

	StateCreator(UObject* Outer, TFunction<void(T*)> Initializer);
	StateCreator(UObject* Outer);

	B* Create() override;

	TFunction<void(T*)> GetInitializer() const;

private:

	TFunction<void(T*)> Initializer;
};

template <class B>
class ARPG_API StateRegistry
{
public:

	StateRegistry() = default;
	~StateRegistry() = default;

	StateRegistry(const StateRegistry&) = delete;
	StateRegistry(StateRegistry&&) = default;

	StateRegistry& operator=(const StateRegistry&) = delete;
	StateRegistry& operator=(StateRegistry&&) = default;

	template<class T>
	void Register(TUniquePtr<StateCreator<T, B>>&& StateCreator);

	StateCreatorBase<B>* Find(UClass* Type);

private:

	TMap<UClass*, TUniquePtr<StateCreatorBase<B>>> States;
};

template <class B>
UClass* StateCreatorBase<B>::GetType() const
{
	return Type;
}

template <class B>
StateCreatorBase<B>::StateCreatorBase(UObject* Outer, UClass* Type)
	: Outer{ Outer }, Type{ Type }
{
}

template<class C>
void StateBase<C>::Action(C* Context)
{
	StartTime = FDateTime::UtcNow();
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, GetName());
}

template<class C>
bool StateBase<C>::TryTranitionTo(UClass* Type, C* Context)
{
	auto Creator = Context->GetRegistry().Find(Type);

	if (Creator)
	{
		Context->TrySetState(Creator->Create());
	}

	return true;
}

template<class C>
bool StateBase<C>::CanTransition(C* Context) const
{
	return true;
}

template<class C>
void StateBase<C>::Tick(float DeltaSeconds, C* Context)
{
}

template<class C>
FDateTime StateBase<C>::GetStartTime() const
{
	return StartTime;
}

template <class T, class B>
inline StateCreator<T, B>::StateCreator(UObject* Outer, TFunction<void(T*)> Initializer)
	: StateCreatorBase<B>(Outer, T::StaticClass()), Initializer(Initializer)
{
}

template <class T, class B>
inline StateCreator<T, B>::StateCreator(UObject* Outer)
	: StateCreatorBase<B>(Outer, T::StaticClass())
{
}

template <class T, class B>
B* StateCreator<T, B>::Create()
{
	T* Obj = NewObject<T>(Outer);

	if (Initializer)
	{
		Initializer(Obj);
	}

	return Obj;
}

template <class T, class B>
TFunction<void(T*)> StateCreator<T, B>::GetInitializer() const
{
	return Initializer;
}

template<class B>
template<class T>
inline void StateRegistry<B>::Register(TUniquePtr<StateCreator<T, B>>&& StateCreator)
{
	UClass* Type = StateCreator->GetType();
	States.Add(Type, MoveTemp(StateCreator));
}

template<class B>
inline StateCreatorBase<B>* StateRegistry<B>::Find(UClass* Type)
{
	TUniquePtr<StateCreatorBase<B>>* Creator = States.Find(Type);
	
	if (Creator)
	{
		return Creator->Get();
	}
	
	return nullptr;
}
