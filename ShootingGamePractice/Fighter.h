#pragma once

class Bullet;
class Fighter
{
private:

	//戦闘機のx,y座標
	int fighterX;
	int fighterY;

	//戦闘機の画像のハンドル
	int fighterImageHandle;

	//戦闘機の画像の横幅と、立幅
	int fighterImageW;
	int fighterImageH;

	//弾発射フラグ
	bool shotFlag;

	//移動量
	int fighterMovingDistance;

	//弾クラス
	Bullet* mBullet;
				
public:

	//Fighterクラスのコンストラクタとデストラクタ
	Fighter();
	~Fighter();

	//毎フレームの処理
	void Update();

	//毎フレームの描画
	void Draw();

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

	 //発射フラグのgetter
	 bool getShotFlag();

	 //発射フラグ切り替え
	 const void shotFlagOn();
	 const void shotFlagOff();

	 //上に移動
	 void MoveUp();

	 //下に移動
	 void MoveDown();

	 //左に移動
	 void MoveLeft();
	 
	 //右に移動
	 void MoveRight();
	 	 
};

