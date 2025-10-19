#include "JobHuntSimulatorGameMode.h"
#include "JobHuntSimulatorCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJobHuntSimulatorGameMode::AJobHuntSimulatorGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AJobHuntSimulatorGameMode::InitGameState()
{
	Super::InitGameState();
}
