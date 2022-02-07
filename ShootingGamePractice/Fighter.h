#pragma once
#include"Object.h"
class Magazine;
class Fighter :public Object
{
private:

	//マガジンクラス
	Magazine* magazine;

				
public:

	//Fighterクラスのコンストラクタとデストラクタ
	Fighter();
	~Fighter();

	//毎フレームの処理
	void Update() override;

	//毎フレームの描画
	void Draw() override;

	//戦闘機のx座標のgetter、setter
	 int getFighterX();
	 void setFighterX(int x);
 
	 //戦闘機のy座標のgetter、setter
	 int getFighterY();
	 void setFighterY(int y);

	 //戦闘機画像のハンドルのgetter、setter
	 int getFighterImageHandle();
	 void setFighterImageHandle(int handle);

	 //戦闘機画像の横幅のgetter、setter
	 int getFighterImageW();
	 void setFighterImageW(int w);

	 //戦闘機画像の縦幅のgetter、setter
	 int getFighterImageH();
	 void setFighterImageH(int h);

	 //移動量のgetter、setter
	 int getMovingDistance();
	 void setMovingDistance(int m);

	 //上に移動
	 void MoveUp();

	 //下に移動
	 void MoveDown();

	 //左に移動
	 void MoveLeft();
	 
	 //右に移動
	 void MoveRight();
	 	 
};

