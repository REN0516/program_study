#include "Fighter.h"
#include "Bullet.h"
#include <DxLib.h>

Fighter::Fighter()
{
	//�e�N���X������
	mBullet = new Bullet(this);

	//�����ʒu�ݒ�
	fighterX = 231;
	fighterY = 890;

	fighterImageHandle = LoadGraph("Fiter.png");

	GetGraphSize(fighterImageHandle, &fighterImageW, &fighterImageH);

	shotFlag = false;

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

	if (CheckHitKey(KEY_INPUT_SPACE) == 1 && shotFlag == false) //�e�𔭎�
	{
		//�e�̈ʒu���Z�b�g
		mBullet->setBulletX((fighterImageW - mBullet->getBulletImageW()) / 2 + fighterX);
		mBullet->setBulletY((fighterImageH - mBullet->getBulletImageH()) / 2 + fighterY);
	
 		shotFlagOn();
	}

	mBullet->Update();
}

void Fighter::Draw()
{
	DrawGraph(fighterX, fighterY, fighterImageHandle, true); //�퓬�@�̉摜��\��
	mBullet->Draw();
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

bool Fighter::getShotFlag()
{
	return shotFlag;
}

const void Fighter::shotFlagOn()
{
	shotFlag = true;
}

const void Fighter::shotFlagOff()
{
	shotFlag = false;
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
