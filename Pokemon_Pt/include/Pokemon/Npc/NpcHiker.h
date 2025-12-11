#pragma once
#include "NpcBase.h"

class CNpcHiker :
	public CNpcBase
{
	friend class CScene;

protected:
	CNpcHiker();
	CNpcHiker(const CNpcHiker& Obj);
	CNpcHiker(CNpcHiker&& Obj);
	virtual ~CNpcHiker();

	FVector3D StartPos;
	FVector3D TargetPos;
	float Dir = 1.f;
	bool bSetStartPos = false;
	float MoveRange = 300.f;

protected:

public:
	virtual bool Init();
	virtual void Update(float DeltaTime);
};

