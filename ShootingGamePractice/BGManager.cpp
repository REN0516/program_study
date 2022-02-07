#include "BGManager.h"
#include <DxLib.h>

BGManager::BGManager()
{
	//�n�ʂ̔w�i
	firstBackGround = new BackGround;
	secondBackGround = new BackGround;

	//��̉_�̔w�i
	firsttopCloud = new BackGround;
	secondtopCloud = new BackGround;

	//���̉_�̔w�i
	firstunderCloud = new BackGround;
	secondunderCloud = new BackGround;

	//�e�̔w�i
	firstShadow = new BackGround;
	secondShadow = new BackGround;

	//�n�ʂ̔w�i�̐ݒ�
	firstBackGround->PositionSetting(0,0);
	firstBackGround->setBGImageHndle(LoadGraph("BG.jpg"));
	firstBackGround->setBGMovingDistance(2);
	//�񖇖�
	secondBackGround->PositionSetting(0,-1440);
	secondBackGround->setBGImageHndle(LoadGraph("BG.jpg"));
	secondBackGround->setBGMovingDistance(2);

	//��̉_�̔w�i�̐ݒ�
	firsttopCloud->PositionSetting(0, 0);
	firsttopCloud->setBGImageHndle(LoadGraph("BG�_1.png"));
	firsttopCloud->setBGMovingDistance(15);
	//�񖇖�
	secondtopCloud->PositionSetting(0, -1440);
	secondtopCloud->setBGImageHndle(LoadGraph("BG�_2.png"));
	secondtopCloud->setBGMovingDistance(15);


	//���̉_�̔w�i�̐ݒ�
	firstunderCloud->PositionSetting(0, 0);
	firstunderCloud->setBGImageHndle(LoadGraph("BG�_��.png"));
	firstunderCloud->setBGMovingDistance(8);
	//�񖇖�
	secondunderCloud->PositionSetting(0, -1440);
	secondunderCloud->setBGImageHndle(LoadGraph("BG�_��.png"));
	secondunderCloud->setBGMovingDistance(8);

	//�e�̔w�i�̐ݒ�
	firstShadow->PositionSetting(0, 0);
	firstShadow->setBGImageHndle(LoadGraph("BG�e.png"));
	firstShadow->setBGMovingDistance(4);
	//�񖇖�
	secondShadow->PositionSetting(0, -1440);
	secondShadow->setBGImageHndle(LoadGraph("BG�e.png"));
	secondShadow->setBGMovingDistance(4);
}

BGManager::~BGManager()
{
}

void BGManager::Update()
{
	//�n��
	firstBackGround->Update();
	secondBackGround->Update();
	
	//�e
	firstShadow->Update();
	secondShadow->Update();
	
	//���̉_
	firstunderCloud->Update();
	secondunderCloud->Update();

	//��̉_
	firsttopCloud->Update();
	secondtopCloud->Update();
}

void BGManager::Draw()
{
	//�n��
	firstBackGround->Draw();
	secondBackGround->Draw();

	//�e
	firstShadow->Draw();
	secondShadow->Draw();

	//���̉_
	firstunderCloud->Draw();
	secondunderCloud->Draw();

	//��̉_
	firsttopCloud->Draw();
	secondtopCloud->Draw();
}
