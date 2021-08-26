#include "Fighter.h"
#include "Magazine.h"
#include <DxLib.h>

Fighter::Fighter()
{
	//�e�q�N���X������
	magazine = new Magazine(this);

	//�����ʒu�ݒ�
	fighterX = 231;
	fighterY = 890;

	fighterImageHandle = LoadGraph("Fiter.png");

	GetGraphSize(fighterImageHandle, &fighterImageW, &fighterImageH);
		
	fighterMovingDistance = 8;
}

Fighter::~Fighter()
{
}

void Fighter::Update()
{
	if (CheckHitKey(KEY_INPUT_RIGHT) == 1 && fighterX < 462)MoveRight(); //�E�Ɉړ�
	if (CheckHitKey(KEY_INPUT_LEFT) == 1 && fighterX > 0)MoveLeft();//���Ɉړ�
	if (CheckHitKey(KEY_INPUT_UP) == 1 && fighterY > 0)MoveUp(); //��Ɉړ�
	if (CheckHitKey(KEY_INPUT_DOWN) == 1 && fighterY < 890)MoveDown(); //���Ɉړ�

	if (CheckHitKey(KEY_INPUT_SPACE) == 1) //�e�𔭎�
	{
		//�e�̈ʒu���Z�b�g
		magazine->Load();
	}

	magazine->Update();
}

void Fighter::Draw()
{
	DrawGraph(fighterX, fighterY, fighterImageHandle, true); //�퓬�@�̉摜��\��
	magazine->Draw();
}

int Fighter::getFighterX()
{
	return fighterX;
}

void Fighter::setFighterX(int x)
{
	fighterX = x;
}

int Fighter::getFighterY()
{
	return fighterY;
}

void Fighter::setFighterY(int y)
{
	fighterY = y;
}

int Fighter::getFighterImageHandle()
{
	return fighterImageHandle;
}

void Fighter::setFighterImageHandle(int handle)
{
	fighterImageHandle = handle;
}

int Fighter::getFighterImageW()
{
	return fighterImageW;
}

void Fighter::setFighterImageW(int w)
{
	fighterImageW = w;
}

int Fighter::getFighterImageH()
{
	return fighterImageH;
}

void Fighter::setFighterImageH(int h)
{
	fighterImageH = h;
}

int Fighter::getMovingDistance()
{
	return fighterMovingDistance;
}

void Fighter::setMovingDistance(int m)
{
	fighterMovingDistance = m;
}

void Fighter::MoveUp()
{
	fighterY -= fighterMovingDistance;
}

void Fighter::MoveDown()
{
	fighterY += fighterMovingDistance;
}

void Fighter::MoveLeft()
{
	fighterX -= fighterMovingDistance;
}

void Fighter::MoveRight()
{
	fighterX += fighterMovingDistance;
}
