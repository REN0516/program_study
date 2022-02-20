#include "BackGround.h"
#include <DxLib.h>

BackGround::BackGround()
{
	//初期化
	bgX = 0;
	bgY = 0;
	//画像ハンドルの初期化
	bgImageHandle = 0;

	//画像のサイズを取得
	//GetGraphSize(bgImageHandle,&bgImageW,&bgImageH);

	//移動量初期化
	bgMovingDistance = 0;
}

BackGround::~BackGround()
{
}

void BackGround::Update()
{
	//縦に移動
	VerticalMove();
	if (bgY >=1440)
	{
		PositionSetting(0,-1440);
	}
}

void BackGround::Draw()
{
	//描画
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
