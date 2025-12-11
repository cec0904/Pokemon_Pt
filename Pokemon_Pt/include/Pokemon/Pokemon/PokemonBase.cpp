#include "PokemonBase.h"
#include "../../Component/StaticMeshComponent.h"
#include "../../Component/WidgetComponent.h"
#include "../../Component/SpriteComponent.h"

#include "../../Scene/Scene.h"
#include "../../Share/Log.h"

//문자열 
#include <sstream>

#include "../../Scene/SceneUIManager.h"
#include "../../UI/UserWidget/HeadInfo.h"

CPokemonBase::CPokemonBase()
{
}

CPokemonBase::CPokemonBase(const CPokemonBase& Obj)
{
}

CPokemonBase::CPokemonBase(CPokemonBase&& Obj)
{
}

CPokemonBase::~CPokemonBase()
{
}

float CPokemonBase::Damage(float Attack, CSceneObject* Obj)
{
	float Dmg = CSceneObject::Damage(Attack, Obj);

	if (mStats.Hp <= 0)
	{
		Destroy();
	}

	return Dmg;
}

bool CPokemonBase::Init()
{
	return true;
}

void CPokemonBase::Update(float DeltaTime)
{
	CSceneObject::Update(DeltaTime);
}


void CPokemonBase::Skill1(float DeltaTime)
{
}

void CPokemonBase::Skill2(float DeltaTime)
{
}

void CPokemonBase::Skill3(float DeltaTime)
{
}

void CPokemonBase::Skill4(float DeltaTime)
{
}

void CPokemonBase::Catch()
{
}

void CPokemonBase::Run()
{
}

