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
	if (!CNpcBase::Init())
	{
		return false;
	}

	mRoot->SetTexture("NpcHiker");
	mRoot->SetPivot(0.5f, 0.1f);

	SetTarget(mScene->FindObjectFromType<CPlayerObject>());

	return true;
}

void CNpcHiker::Update(float DeltaTime)
{
	CNpcBase::Update(DeltaTime);

	if (!bSetStartPos)
	{
		StartPos = mRoot->GetWorldPosition();
		bSetStartPos = true;
	}
	FVector3D CurrentPos = mRoot->GetWorldPosition();


	if (CurrentPos.x <= StartPos.x)
	{
		Dir = 1.f;
	}
	else if (CurrentPos.x >= StartPos.x + MoveRange)
	{
		Dir = -1.f;
	}


	TargetPos = CurrentPos + mRootComponent->GetAxis(EAxis::X) * mSpeed * DeltaTime * Dir;

	mRoot->SetWorldPos(TargetPos);
}
