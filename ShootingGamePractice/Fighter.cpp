#include "Fighter.h"
#include "Magazine.h"
#include <DxLib.h>

Fighter::Fighter()
{
	//弾倉クラス初期化
	magazine = new Magazine(this);

	//初期位置設定
	x = 231;
	y = 890;

	imageHandle = LoadGraph("Fiter.png");

	GetGraphSize(imageHandle, &imageW, &imageH);
		
	movingDistance = 8;
}

Fighter::~Fighter()
{
}

void Fighter::Update()
{
	if (CheckHitKey(KEY_INPUT_RIGHT) == 1 && x < 462)MoveRight(); //右に移動
	if (CheckHitKey(KEY_INPUT_LEFT) == 1 && x > 0)MoveLeft();//左に移動
	if (CheckHitKey(KEY_INPUT_UP) == 1 && y > 0)MoveUp(); //上に移動
	if (CheckHitKey(KEY_INPUT_DOWN) == 1 && y < 890)MoveDown(); //下に移動

	if (CheckHitKey(KEY_INPUT_SPACE) == 1) //弾を発射
	{
		//弾の位置をセット
		//magazine->Load();
   		magazine->Fire();

	}

	magazine->Update(); 
}

void Fighter::Draw()
{
	magazine->Draw();
	DrawGraph(x, y, imageHandle, true); //戦闘機の画像を表示
}

int Fighter::getFighterX()
{
	return x;
}

void Fighter::setFighterX(int x)
{
	x = x;
}

int Fighter::getFighterY()
{
	return y;
}

void Fighter::setFighterY(int y)
{
	y = y;
}

int Fighter::getFighterImageHandle()
{
	return imageHandle;
}

void Fighter::setFighterImageHandle(int handle)
{
	imageHandle = handle;
}

int Fighter::getFighterImageW()
{
	return imageW;
}

void Fighter::setFighterImageW(int w)
{
	imageW = w;
}

int Fighter::getFighterImageH()
{
	return imageH;
}

void Fighter::setFighterImageH(int h)
{
	imageH = h;
}

int Fighter::getMovingDistance()
{
	return movingDistance;
}

void Fighter::setMovingDistance(int m)
{
	movingDistance = m;
}

void Fighter::MoveUp()
{
	y -= movingDistance;
}

void Fighter::MoveDown()
{
	y += movingDistance;
}

void Fighter::MoveLeft()
{
	x -= movingDistance;
}

void Fighter::MoveRight()
{
	x += movingDistance;
}
