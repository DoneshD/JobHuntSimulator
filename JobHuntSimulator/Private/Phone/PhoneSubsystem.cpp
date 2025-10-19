#include "Phone/PhoneSubsystem.h"

void UPhoneSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	UE_LOG(LogTemp, Warning, TEXT("PhoneSubsystem initialized for LocalPlayer"));
}

void UPhoneSubsystem::Deinitialize()
{
	Super::Deinitialize();
	UE_LOG(LogTemp, Warning, TEXT("PhoneSubsystem deinitialized for LocalPlayer"));
}

void UPhoneSubsystem::OpenPhone()
{
	UE_LOG(LogTemp, Warning, TEXT("Open Phone"));
}

void UPhoneSubsystem::ClosePhone()
{
	UE_LOG(LogTemp, Warning, TEXT("Close Phone"));
}

void UPhoneSubsystem::OpenApp()
{
	UE_LOG(LogTemp, Warning, TEXT("Open App"));
}

void UPhoneSubsystem::CloseApp()
{
	UE_LOG(LogTemp, Warning, TEXT("Close App"));
	
}
