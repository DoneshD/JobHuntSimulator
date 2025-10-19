#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JHSApp.generated.h"

class UJHSAppMetaData;

UCLASS()
class JOBHUNTSIMULATOR_API UJHSApp : public UObject
{
	GENERATED_BODY()

public:
	
	UPROPERTY()
	TObjectPtr<UJHSAppMetaData> AppData;
};
