#pragma once
#include "../../Object/SceneObject.h"


enum class EPokemonState
{
	Idle,
	Appear,
	Dead,
	End
};

enum class EPokemonSkill
{
	Skill1,
	Skill2,
	Skill3,
	Skill4,
	Catch,
	Run,
	End
};

struct PokemonStats
{
	string mName;
	string Type;
	int Hp = 0;
	int Atk = 0;
	int Def = 0;
	int SpAtk = 0;
	int SpDef = 0;
	int Speed = 0;
	int CatchRate = 0;
};

class CPokemonBase :
	public CSceneObject
{
	friend class CScene;

protected:
	CPokemonBase();
	CPokemonBase(const CPokemonBase& Obj);
	CPokemonBase(CPokemonBase&& Obj);
	virtual ~CPokemonBase();

protected:
	CSharedPtr<class CSpriteComponent> mRoot;

	// Widget Component
	CSharedPtr<class CWidgetComponent> mWidgetComponent;

	EPokemonState mState;
	PokemonStats mStats;
	EPokemonSkill mSkill;


public:
	EPokemonState GetState() const
	{
		return mState;
	}

	void SetState(EPokemonState State)
	{
		mState = State;
	}

	EPokemonSkill GetSkill() const
	{
		return mSkill;
	}

	void SetSkill(EPokemonSkill Skill)
	{
		mSkill = Skill;
	}

public:
	virtual float Damage(float Attack, CSceneObject* Obj);

public:
	virtual bool Init();
	virtual void Update(float DeltaTime);


protected:
	void Skill1(float DeltaTime);
	void Skill2(float DeltaTime);
	void Skill3(float DeltaTime);
	void Skill4(float DeltaTime);
	void Catch();
	void Run();


};

