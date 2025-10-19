#pragma once

#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "PhoneSubsystem.generated.h"


UCLASS()
class JOBHUNTSIMULATOR_API UPhoneSubsystem : public ULocalPlayerSubsystem
{
	GENERATED_BODY()

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
