#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "JHSAppMetaData.generated.h"

USTRUCT()
struct FBaseAppData
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	int32 AppID;

	UPROPERTY(EditDefaultsOnly)
	FName AppName;

	UPROPERTY(EditDefaultsOnly)
	FString AppDescription;
	
};

USTRUCT()
struct FAppDisplayData
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	FName DisplayName;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UUserWidget> DisplayWidgetClass;
	
};


UCLASS()
class JOBHUNTSIMULATOR_API UJHSAppMetaData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly)
	FBaseAppData BaseAppData;

	UPROPERTY(EditDefaultsOnly)
	FAppDisplayData AppDisplayData;
	
};
