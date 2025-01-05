// Copyright Cat Spank Games

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EnemyInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEnemyInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class AURA_API IEnemyInterface
{
	GENERATED_BODY()

public:
	virtual void HighlightActor() = 0; // the 0 makes it a pure virtual function, it must be derived from ::
										// any class that implements this, need to override it, it makes the class abstract
	virtual void UnHighlightActor() = 0;
};
