#include "Phone/JHSPhoneSubsystem.h"

#include "Apps/JHSApp.h"
#include "Apps/JHSAppMetaData.h"

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

	if(AppsClassArray.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("Phone is empty"));
		return;
	}

	for(TSubclassOf AppClass : AppsClassArray)
	{
		if(!AppClass && !AppClass->IsValidLowLevel())
		{
			UE_LOG(LogTemp, Error, TEXT("App class is invalid"));
			return;
		}
	
		UJHSApp* App = NewObject<UJHSApp>(this, AppClass);

		if(!App || !App->IsValidLowLevel())
		{
			UE_LOG(LogTemp, Error, TEXT("App is invalid"));
			return;
		}

		if(!App->AppData || !App->AppData->IsValidLowLevel())
		{
			UE_LOG(LogTemp, Error, TEXT("App data is invalid"));
			return;
		}
		
		UE_LOG(LogTemp, Warning, TEXT("AppId: %d"), App->AppData->BaseAppData.AppID);
		UE_LOG(LogTemp, Warning, TEXT("App name: %s"), *App->AppData->BaseAppData.AppName.ToString());
	}

	
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