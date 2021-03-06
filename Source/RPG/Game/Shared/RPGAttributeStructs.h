#pragma once
//#include "RPG.h"
#include "RPGAttributeStructs.generated.h"

USTRUCT(BlueprintType, Blueprintable)
struct FAttributeBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Attributes")
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Attributes")
	float Energy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Attributes")
	float Stamina;
};