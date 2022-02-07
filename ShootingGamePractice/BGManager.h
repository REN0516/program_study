#pragma once
#include"BackGround.h"
#include"Object.h"
class BGManager:public Object
{
private:
	//スクロールするのに二枚必要
	BackGround* firstBackGround;
	BackGround* secondBackGround;

	//下の雲の背景
	BackGround* firstunderCloud;
	BackGround* secondunderCloud;

	//上の雲の背景
	BackGround* firsttopCloud;
	BackGround* secondtopCloud;

	//影の背景
	BackGround* firstShadow;
	BackGround* secondShadow;

public:
	//BackGroundクラスのコンストラクタとデストラクタ
	BGManager();
	~BGManager();

	//毎フレームの処理
	void Update() override;

	//毎フレームの描画
	void Draw() override;
};