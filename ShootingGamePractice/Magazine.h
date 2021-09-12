#pragma once
class Bullet;
class Fighter;
class Magazine
{
private:

	//プールの大きさ
	static const int poolSize = 100;
	
	//弾の配列
	Bullet* bullet[poolSize];

	//Fighterクラス
	Fighter* fighter;

public:

	Magazine(Fighter* f);
	~Magazine();

	//弾を作る
	void MakeBullet(int x, int y);

	//毎フレームの処理
	void Update();

	//毎フレームの描画
	void Draw();

	//弾の位置をセット
	void Load();
};

