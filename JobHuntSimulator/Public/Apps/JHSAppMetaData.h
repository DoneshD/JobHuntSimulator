#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "JHSAppMetaData.generated.h"

UCLASS()
class JOBHUNTSIMULATOR_API UJHSAppMetaData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly)
	int32 AppID;

	UPROPERTY(EditDefaultsOnly)
	FName AppName;

	UPROPERTY(EditDefaultsOnly)
	FName AppDisplayName;

	UPROPERTY(EditDefaultsOnly)
	FString AppDescription;
	
};
