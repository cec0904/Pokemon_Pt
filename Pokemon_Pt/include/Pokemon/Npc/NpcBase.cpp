#include "NpcBase.h"
#include "../../Object/PlayerObject.h"
#include "../../Object/SceneObject.h"
#include "../../Component/StaticMeshComponent.h"
#include "../../Component/MovementComponent.h"
#include "../../Component/ColliderAABB2D.h"
#include "../../Component/ColliderSphere2D.h"
#include "../../Component/ColliderOBB2D.h"
#include "../../Component/ColliderLine2D.h"
#include "../../Component/SpriteComponent.h"
#include "../../Animation/Animation2D.h"
#include "../../Asset/Animation/Animation2DData.h"
#include "../../Asset/Texture/Texture.h"
#include "../../Scene/Scene.h"
#include "../../Share/Log.h"

//문자열 
#include <sstream>

CNpcBase::CNpcBase()
{
}

CNpcBase::CNpcBase(const CNpcBase& Obj)
{
}

CNpcBase::CNpcBase(CNpcBase&& Obj)
{
}

CNpcBase::~CNpcBase()
{
}

void CNpcBase::CollisionNpc(const FVector3D& HitPont, CColliderBase* Dest)
{
	
}

void CNpcBase::CollisionNpcEnd(CColliderBase* Dest)
{

}

bool CNpcBase::Init()
{
	if (!CSceneObject::Init())
	{
		return false;
	}


	return true;
}

void CNpcBase::Update(float DeltaTime)
{
	CSceneObject::Update(DeltaTime);
}
