#include "BackGround.h"
#include <DxLib.h>

BackGround::BackGround()
{
	//������
	bgX = 0;
	bgY = 0;
	//�摜�n���h���̏�����
	bgImageHandle = 0;

	//�摜�̃T�C�Y���擾
	//GetGraphSize(bgImageHandle,&bgImageW,&bgImageH);

	//�ړ��ʏ�����
	bgMovingDistance = 0;
}

BackGround::~BackGround()
{
}

void BackGround::Update()
{
	//�c�Ɉړ�
	VerticalMove();
	if (bgY >=1440)
	{
		PositionSetting(0,-1440);
	}
}

void BackGround::Draw()
{
	//�`��
	DrawGraph(bgX, bgY, bgImageHandle, true);
}

void BackGround::PositionSetting(int x ,int y)
{
	bgX = x;
	bgY = y;
}

void BackGround::setBGImageHndle(int handle)
{
	bgImageHandle = handle;
}

void BackGround::setBGMovingDistance(int movingDistance)
{
	bgMovingDistance = movingDistance;
}

void BackGround::VerticalMove()
{
	bgY += bgMovingDistance;
}

void BackGround::Restore()
{
}
