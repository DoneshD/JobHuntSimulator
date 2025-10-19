#pragma once

#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "JHSPhoneSubsystem.generated.h"


UCLASS()
class JOBHUNTSIMULATOR_API UJHSPhoneSubsystem : public ULocalPlayerSubsystem
{
	GENERATED_BODY()

public:

	// UPROPERTY()
	// TArray<TObjectPtr<UApp>> AppsArray;

protected:
	
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	
	UFUNCTION()
	void OpenPhone();

	UFUNCTION()
	void ClosePhone();

	UFUNCTION()
	void OpenApp();

	UFUNCTION()
	void CloseApp();
	
};

