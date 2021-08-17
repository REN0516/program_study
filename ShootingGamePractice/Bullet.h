#pragma once
class Bullet
{
private:
	//弾のx,y軸
	int bulletX;
	int bulletY;

	//弾画像の縦幅、横幅
	int bulletImageW;
	int bulletImageH;

	//弾画像のハンドル
	int bulletImageHandle;

	//移動量
	int bulletMovingDistance;

public:
	Bullet();
	~Bullet();

	//毎フレームの処理
	void Update();

	//毎フレームの描画
	void Draw();

	int getBulletX();
	void setBulletX(int x);

	int getBulletY();
	void setBulletY(int y);

	int getBulletImageW();
	void setBulletImageW(int w);

	int getBulletImageH();
	void setBulletImageH(int h);
		
	int getBulletImageHandle();
	void setBulletImageHandle(int handle);

	void MoveUp();

};

