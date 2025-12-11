#include "NpcHiker.h"
#include "../../Scene/Scene.h"
#include "../../Object/PlayerObject.h"
#include "../../Component/StaticMeshComponent.h"
#include "../../Component/SpriteComponent.h"

CNpcHiker::CNpcHiker()
{
}

CNpcHiker::CNpcHiker(const CNpcHiker& Obj)
{
}

CNpcHiker::CNpcHiker(CNpcHiker&& Obj)
{
}

CNpcHiker::~CNpcHiker()
{
}

bool CNpcHiker::Init()
{
	return true;
}

void CNpcHiker::Update(float DeltaTime)
{
	CNpcBase::Update(DeltaTime);
}
