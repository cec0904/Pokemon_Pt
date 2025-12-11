#pragma once
#include "../../UI/UserWidget/WindowWidget.h"

class CPedometer :
	public CWindowWidget
{
	friend class CSceneUIManager;

protected:
	CPedometer();
	virtual ~CPedometer();

public:

	CSharedPtr<class CButton> mButton;



public:
	bool IsClick = false;


public:
	virtual bool Init();
};

