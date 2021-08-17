#include "DxLib.h"
#include "Fighter.h"
#include "Bullet.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	// ＤＸライブラリ初期化
	if (DxLib_Init() == -1) return -1;

	ChangeWindowMode(true); //ウィンドウモードに切り替える

	SetGraphMode(540, 960, 32); //画面大きさ固定

	SetDrawScreen(DX_SCREEN_BACK); //裏画面に描画設定

	Fighter* fighter = new Fighter;

	Bullet* bullet = new Bullet;
		
	while (ProcessMessage()==0)
	{
		fighter->Update();
		bullet->Update();

		ClearDrawScreen(); //描画されているものをすべて消す
		fighter->Draw();
		bullet->Draw();
		ScreenFlip(); //表画面に裏画面を描画

		if (CheckHitKey(KEY_INPUT_ESCAPE) == 1)break; //ESCが押されたら終了
	}

	// ＤＸライブラリ使用の終了
	DxLib_End();

	// ソフトの終了
	return 0;
}