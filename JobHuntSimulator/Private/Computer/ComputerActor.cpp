#include "Computer/ComputerActor.h"
#include "Components/BoxComponent.h"

AComputerActor::AComputerActor()
{
	PrimaryActorTick.bCanEverTick = true;

	// Create and attach the BoxComponent
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	RootComponent = BoxCollision; // Make it the root component or attach it to another component

	
	BoxCollision->SetBoxExtent(FVector(50.0f, 50.0f, 50.0f)); // Set the size of the box
	BoxCollision->SetCollisionProfileName(TEXT("BlockAllDynamic")); // Set collision profile
	BoxCollision->SetGenerateOverlapEvents(true);

	ComputerStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("ComputerStaticMesh");
	ComputerStaticMesh->SetupAttachment(RootComponent);
	
}

void AComputerActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AComputerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

