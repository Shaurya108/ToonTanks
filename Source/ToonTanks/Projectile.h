#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

UCLASS()
class TOONTANKS_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
   
    UPROPERTY(VisibleAnywhere,BlueprintReadOnly,category = "Components" , meta = (AllowPrivateAccess = "true"))
    class UStaticMeshComponent*  ProjectileMesh;

};
