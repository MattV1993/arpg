// Fill out your copyright notice in the Description page of Project Settings.


#include "Team.h"

bool UTeam::CanAttack(const UTeam* Other) const
{
	return !(TeamName == Other->TeamName);
}

void UTeam::SetName(FName Name)
{
	TeamName = Name;
}

FName UTeam::GetName() const
{
	return TeamName;
}
