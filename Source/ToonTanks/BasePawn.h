// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	ABasePawn();

protected:

    void RotateTurret(FVector LookAtTarget);

private:
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,category = "Components" , meta = (AllowPrivateAccess = "true"))
	class UCapsuleComponent* CapsuleComp;
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,category = "Components" , meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* BaseMesh;
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,category = "Components" , meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* TurretMesh;
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,category = "Components" , meta = (AllowPrivateAccess = "true"))
	class USceneComponent* ProjectileSpawn; 

};
