#include "DxLib.h"
#include "GameManager.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	// ＤＸライブラリ初期化
	if (DxLib_Init() == -1) return -1;

	ChangeWindowMode(true); //ウィンドウモードに切り替える

	SetGraphMode(540, 960, 32); //画面大きさ固定

	SetDrawScreen(DX_SCREEN_BACK); //裏画面に描画設定

	GameManager* gameManager = new GameManager;
			
	while (ScreenFlip()==0 && ProcessMessage()==0 && ClearDrawScreen()==0)
	{
		gameManager->All();

		if (CheckHitKey(KEY_INPUT_ESCAPE) == 1)break; //ESCが押されたら終了
	}

	// ＤＸライブラリ使用の終了
	DxLib_End();

	// ソフトの終了
	return 0;
}