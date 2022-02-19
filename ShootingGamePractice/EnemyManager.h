#pragma once
#include<List>
#include"Enemy.h"
class EnemyManager:public Object
{
private:
	Enemy* enemy;
	std::list<Enemy*> enemyList;
public:
	//EnemyManagerのコンストラクタとデストラクタ
	EnemyManager();
	~EnemyManager();

	//エネミーのUpdateを入れる
	void Update();
	//エネミーのDrawを入れる
	void Draw();
	//ランダム座標生成
	void RandomCoordinateGenerator();
};

