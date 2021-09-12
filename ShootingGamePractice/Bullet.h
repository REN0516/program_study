#pragma once
class Fighter;
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

	//発射フラグ
	bool shotFlag;

public:
	Bullet();
	~Bullet();

	//毎フレームの処理
	void Update();

	//毎フレームの描画
	void Draw();

	//初期化
	void Init(int x, int y);

	//弾のx軸のgetter、setter
	int getBulletX();
	void setBulletX(int x);

	//弾のy軸のgetter、setter
	int getBulletY();
	void setBulletY(int y);

	//弾の画像の横幅のgetter、setter
	int getBulletImageW();
	void setBulletImageW(int w);

	//弾の画像の縦幅のgetter、setter
	int getBulletImageH();
	void setBulletImageH(int h);
		
	//発射フラグのgetter、setter
	bool getShotFlag();
	void setShotFlag(bool flag);

	//弾の画像のハンドル
	int getBulletImageHandle();
	void setBulletImageHandle(int handle);

	//弾の動き
	void Movement();
	
	//発射されているかを返す
	bool const IsUsed();
};

