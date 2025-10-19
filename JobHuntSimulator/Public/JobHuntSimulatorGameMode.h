// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "JobHuntSimulatorGameMode.generated.h"

UCLASS(minimalapi)
class AJobHuntSimulatorGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AJobHuntSimulatorGameMode();

	virtual void InitGameState() override;
};



