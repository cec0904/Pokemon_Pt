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

protected:

public:
	virtual bool Init();
	virtual void Update(float DeltaTime);
};

