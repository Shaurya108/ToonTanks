#pragma once
#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tank.generated.h"

UCLASS()
class TOONTANKS_API ATank : public ABasePawn
{
	GENERATED_BODY()
public:
	ATank();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent *PlayerInputComponent) override;
	void Move(float AxisValue);
	void Turn(float AxisValue);

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, category = "Components", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent *Camera;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, category = "Components", meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent *SpringArm;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float MoveSpeed = 400.f;
	UPROPERTY(EditAnywhere, Category = "Movement")
	float TurnRate = 100.f;

	class APlayerController* PlayerControllerRef;
};
