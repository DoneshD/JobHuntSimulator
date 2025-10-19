#include "JobHuntSimulatorGameMode.h"
#include "Phone/JHSPhoneSubsystem.h"
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

void AJobHuntSimulatorGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	
	if(!NewPlayer && !NewPlayer->IsValidLowLevel())
	{
		UE_LOG(LogTemp, Error, TEXT("AJobHuntSimulatorGameMode::PostLogin - Invalid Player Controller"))
		return;
	}
	
	UJHSPhoneSubsystem* PhoneSubsystem = NewPlayer->GetLocalPlayer()->GetSubsystem<UJHSPhoneSubsystem>();

	if(!PhoneSubsystem && !PhoneSubsystem->IsValidLowLevel())
	{
		UE_LOG(LogTemp, Error, TEXT("AJobHuntSimulatorGameMode::PostLogin - PhoneSubsystem is invalid"));
		return;
	}

	for(TSubclassOf AppClass : AppsClassArray)
	{
		PhoneSubsystem->AppsClassArray.Add(AppClass);
	}
	
}
