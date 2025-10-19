#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "JobHuntSimulatorGameMode.generated.h"

class UJHSApp;

UCLASS(minimalapi)
class AJobHuntSimulatorGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "JobHuntSimulator")
	TArray<TSubclassOf<UJHSApp>> AppsClassArray;

public:
	
	AJobHuntSimulatorGameMode();
	virtual void InitGameState() override;

	virtual void PostLogin(APlayerController* NewPlayer) override;
};



