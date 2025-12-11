#include "Pedometer.h"
#include "../../Device.h"
#include "../../Scene/Scene.h"
#include "../../Scene/SceneMain.h"
#include "../../Scene/SceneManager.h"
#include "../../Scene/SceneUIManager.h"
#include "../../UI/Common/Image.h"
#include "../../UI/Common/Button.h"
#include "../../Share/Log.h"

CPedometer::CPedometer()
{
}

CPedometer::~CPedometer()
{
}

bool CPedometer::Init()
{
	CWindowWidget::Init();
	FResolution RS = CDevice::GetInst()->GetResolution();

	// 배경
	CSharedPtr<CImage> UnHovered = mScene->GetUIManager()->CreateWidget<CImage>("UnHovered");
	

	// 버튼
	mButton = mScene->GetUIManager()->CreateWidget<CButton>("ClearButton");


	UnHovered->SetTexture("Pedometer_UnHovered", TEXT("Texture/Pokemon/Poketch/Pedometer_UnHovered.png"));
	UnHovered->SetSize((float)RS.Width, (float)RS.Height);


	mButton->SetPos(640.f, 200.f);
	mButton->SetSize(100.f, 100.f);
	mButton->SetPivot(FVector2D(0.5f, 0.5f));

	mButton->SetTexture(EButtonState::Normal, "ClearButton", TEXT("Texture/Pokemon/Poketch/Pedometer_clear_UnHovered.png"));
	mButton->SetTexture(EButtonState::Hovered, "ClearButton");
	mButton->SetTexture(EButtonState::Click, "ClearButton", TEXT("Texture/Pokemon/Poketch/Pedometer_clear_Hovered.png"));
	mButton->SetTexture(EButtonState::Disable, "ClearButton", TEXT("Texture/Pokemon/Poketch/Pedometer_clear_UnHovered.png"));


	AddWidget(UnHovered);
	AddWidget(mButton);

	return true;
}