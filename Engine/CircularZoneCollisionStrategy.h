#pragma once
#include "pch.h"
#include "CollisionDetectionStrategy.h"
#include "Player.h"
#include "BaseSpriteData.h"

class CircularZoneCollisionStrategy : public CollisionDetectionStrategy
{
public:
	CircularZoneCollisionStrategy();
	bool Detect(CollisionDetectionInfo * info);
	int Detect(
		int * column,
		int * row,
		float2 playerSize,
		float2 spriteSize,
		Player * pPlayer,
		vector<BaseSpriteData> * sprites);

protected:

private:
};