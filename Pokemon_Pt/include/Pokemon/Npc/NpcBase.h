#pragma once
#include "../../Object/SceneObject.h"

class CNpcBase :
	public CSceneObject
{
	friend class CScene;

protected:
	CNpcBase();
	CNpcBase(const CNpcBase& Obj);
	CNpcBase(CNpcBase&& Obj);
	virtual ~CNpcBase();

protected:
	CSharedPtr<class CSpriteComponent> mRoot;
	CSharedPtr<class CColliderAABB2D> mBody;
	CSharedPtr<class CMovementComponent> mMovement;
	CSharedPtr<CSceneObject> mTarget;
	
	float mDetectDistance = 0.f;

	// 애니메이션
	class CAnimation2D* mAnimation = nullptr;
	// Idle 상태값으로 돌아갈건지 여부
	bool mAutoBasePose = true;

	float mSpeed = 200.f;

	FVector3D StartPos;
	FVector3D TargetPos;

private:
	void CollisionNpc(const FVector3D& HitPont, class CColliderBase* Dest);
	void CollisionNpcEnd(class CColliderBase* Dest);


public:
	void SetTarget(CSceneObject* Target)
	{
		mTarget = Target;
	}

public:
	// 대사
	void NpcScript();


public:
	virtual bool Init();
	virtual void Update(float DeltaTime);
};

