#include "BGManager.h"
#include <DxLib.h>

BGManager::BGManager()
{
	//’n–Ê‚Ì”wŒi
	firstBackGround = new BackGround;
	secondBackGround = new BackGround;

	//ã‚Ì‰_‚Ì”wŒi
	firsttopCloud = new BackGround;
	secondtopCloud = new BackGround;

	//‰º‚Ì‰_‚Ì”wŒi
	firstunderCloud = new BackGround;
	secondunderCloud = new BackGround;

	//‰e‚Ì”wŒi
	firstShadow = new BackGround;
	secondShadow = new BackGround;

	//’n–Ê‚Ì”wŒi‚ÌÝ’è
	firstBackGround->PositionSetting(0,0);
	firstBackGround->setBGImageHndle(LoadGraph("BG.jpg"));
	firstBackGround->setBGMovingDistance(2);
	//“ñ–‡–Ú
	secondBackGround->PositionSetting(0,-1440);
	secondBackGround->setBGImageHndle(LoadGraph("BG.jpg"));
	secondBackGround->setBGMovingDistance(2);

	//ã‚Ì‰_‚Ì”wŒi‚ÌÝ’è
	firsttopCloud->PositionSetting(0, 0);
	firsttopCloud->setBGImageHndle(LoadGraph("BG‰_1.png"));
	firsttopCloud->setBGMovingDistance(15);
	//“ñ–‡–Ú
	secondtopCloud->PositionSetting(0, -1440);
	secondtopCloud->setBGImageHndle(LoadGraph("BG‰_2.png"));
	secondtopCloud->setBGMovingDistance(15);


	//‰º‚Ì‰_‚Ì”wŒi‚ÌÝ’è
	firstunderCloud->PositionSetting(0, 0);
	firstunderCloud->setBGImageHndle(LoadGraph("BG‰_‰º.png"));
	firstunderCloud->setBGMovingDistance(8);
	//“ñ–‡–Ú
	secondunderCloud->PositionSetting(0, -1440);
	secondunderCloud->setBGImageHndle(LoadGraph("BG‰_‰º.png"));
	secondunderCloud->setBGMovingDistance(8);

	//‰e‚Ì”wŒi‚ÌÝ’è
	firstShadow->PositionSetting(0, 0);
	firstShadow->setBGImageHndle(LoadGraph("BG‰e.png"));
	firstShadow->setBGMovingDistance(4);
	//“ñ–‡–Ú
	secondShadow->PositionSetting(0, -1440);
	secondShadow->setBGImageHndle(LoadGraph("BG‰e.png"));
	secondShadow->setBGMovingDistance(4);
}

BGManager::~BGManager()
{
}

void BGManager::Update()
{
	//’n–Ê
	firstBackGround->Update();
	secondBackGround->Update();
	
	//‰e
	firstShadow->Update();
	secondShadow->Update();
	
	//‰º‚Ì‰_
	firstunderCloud->Update();
	secondunderCloud->Update();

	//ã‚Ì‰_
	firsttopCloud->Update();
	secondtopCloud->Update();
}

void BGManager::Draw()
{
	//’n–Ê
	firstBackGround->Draw();
	secondBackGround->Draw();

	//‰e
	firstShadow->Draw();
	secondShadow->Draw();

	//‰º‚Ì‰_
	firstunderCloud->Draw();
	secondunderCloud->Draw();

	//ã‚Ì‰_
	firsttopCloud->Draw();
	secondtopCloud->Draw();
}
