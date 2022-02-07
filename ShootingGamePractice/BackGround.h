#pragma once
#include <iostream>
#include<string>
class BackGround
{
private:
	//背景のx,y座標
	int bgX;
	int bgY;

	//背景の画像のハンドル
	int bgImageHandle;

	//背景の画像の横幅と、立幅
	//int bgImageW;
	//int bgImageH;

	//移動量
	int bgMovingDistance;
public:
		//BackGroundクラスのコンストラクタとデストラクタ
		BackGround();
		~BackGround();

		//毎フレームの処理
		void Update();

		//毎フレームの描画
		void Draw();

		//初期位置
		void PositionSetting(int x,int y);

		//背景画像のハンドルをセット
		void setBGImageHndle(int handle);

		//移動量をセット
		void setBGMovingDistance(int movingDistance);

		//縦移動処理
		void VerticalMove();

		//最初の位置に戻す処理
		void Restore();
};