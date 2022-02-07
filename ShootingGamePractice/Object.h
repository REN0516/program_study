#pragma once
class Object
{
protected:
	//そのオブジェクトが持っている座標
	int x;
	int y;

	//戦闘機の画像のハンドル
	int imageHandle;

	//戦闘機の画像の横幅と、立幅
	int imageW;
	int imageH;

	//移動量
	int movingDistance;
public:

	 Object();
	~Object();

	//毎フレームの処理
	virtual void Update();

	//毎フレームの描画
	virtual void Draw();
};