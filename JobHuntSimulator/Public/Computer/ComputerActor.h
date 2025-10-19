#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ComputerActor.generated.h"

class UBoxComponent;

UCLASS()
class JOBHUNTSIMULATOR_API AComputerActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UBoxComponent> BoxCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ComputerActor")
	TObjectPtr<UStaticMeshComponent> ComputerStaticMesh;

protected:
	
	AComputerActor();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
};
