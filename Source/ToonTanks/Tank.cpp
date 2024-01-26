// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

ATank::ATank()
{
 Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
 SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
 SpringArm -> SetupAttachment(RootComponent);
 //SetupAttachment(CapsuleComp) will give error as it can't access private member of BasePawn
 Camera -> SetupAttachment(SpringArm);

}

void ATank::Move(float AxisValue)
{
 UE_LOG(LogTemp,Warning,TEXT("Axis Value are: %f"), AxisValue);
}

void ATank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent -> BindAxis(TEXT("MoveForward"), this, &ATank::Move);
    PlayerInputComponent -> BindAxis(TEXT("Turn"), this, &ATank::Move);
    PlayerInputComponent -> BindAxis(TEXT("RotateTurret"), this, &ATank::Move);
}

