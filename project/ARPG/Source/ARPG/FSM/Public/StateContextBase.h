#pragma once

#include "CoreMinimal.h"

#include "StateBase.h"

template <class P, class Base>
class ARPG_API StateContextBase
{
public:

	void SetIntent(UClass* Type);
	bool TrySetState(Base* State);

	virtual void SetState(Base* State) = 0;

	void Tick(float DeltaSeconds);

	StateRegistry<Base>& GetRegistry();

	virtual Base* GetCurrentState() const = 0;

protected:

	StateRegistry<Base> Registry;
};

template<class P, class Base>
inline void StateContextBase<P, Base>::SetIntent(UClass* Type)
{
	bool Changed = GetCurrentState()->TryTranitionTo(Type, static_cast<P*>(this));
}

template<class P, class Base>
inline bool StateContextBase<P, Base>::TrySetState(Base* State)
{
	if (State->CanTransition(static_cast<P*>(this)) == false)
	{
		return false;
	}

	SetState(State);
	GetCurrentState()->Action(static_cast<P*>(this));

	return true;
}

template<class P, class Base>
inline void StateContextBase<P, Base>::Tick(float DeltaSeconds)
{
	GetCurrentState()->Tick(DeltaSeconds, static_cast<P*>(this));
}

template<class P, class Base>
inline StateRegistry<Base>& StateContextBase<P, Base>::GetRegistry()
{
	return Registry;
}