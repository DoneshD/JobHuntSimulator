#include "Phone/JHSPhoneSubsystem.h"

void UJHSPhoneSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	UE_LOG(LogTemp, Warning, TEXT("PhoneSubsystem initialized for LocalPlayer"));
	
}

void UJHSPhoneSubsystem::Deinitialize()
{
	Super::Deinitialize();
	UE_LOG(LogTemp, Warning, TEXT("PhoneSubsystem deinitialized for LocalPlayer"));
}

void UJHSPhoneSubsystem::OpenPhone()
{
	UE_LOG(LogTemp, Warning, TEXT("Open Phone"));

	// if(AppsArray.IsEmpty())
	// {
	// 	UE_LOG(LogTemp, Error, TEXT("Phone is empty"));
	// 	return;
	// }
	//
	// if(!AppsArray[0] && !AppsArray[0]->IsValidLowLevel())
	// {
	// 	UE_LOG(LogTemp, Error, TEXT("App is invalid"));
	// 	return;
	// }
	//
	// UE_LOG(LogTemp, Warning, TEXT("AppId: %d"), AppsArray[0]->AppData.AppId)
	
}

void UJHSPhoneSubsystem::ClosePhone()
{
	UE_LOG(LogTemp, Warning, TEXT("Close Phone"));
}

void UJHSPhoneSubsystem::OpenApp()
{
	UE_LOG(LogTemp, Warning, TEXT("Open App"));
}

void UJHSPhoneSubsystem::CloseApp()
{
	UE_LOG(LogTemp, Warning, TEXT("Close App"));
	
}