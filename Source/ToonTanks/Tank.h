// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tank.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATank : public ABasePawn
{
	GENERATED_BODY()
	public:
	ATank();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void Move(float AxisValue);
	void Turn(float AxisValue);
	void RotateTurret(float AxisValue);


	private:
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,category = "Components" , meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,category = "Components" , meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArm;

	class APlayerController* PlayerControllerRef;

    UPROPERTY(EditAnywhere,Category="Movement")
	float MoveSpeed = 400.f;
    UPROPERTY(EditAnywhere,Category="Movement")
	float TurnRate = 100.f;


	
};
