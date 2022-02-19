#pragma once
#include"Object.h"

class Enemy:public Object
{
private:
	bool isValid;
	Enemy* enemy;
public:
	//エネミーのコンストラクタとデストラクタ
	Enemy(int X);
	~Enemy();

	void Update()override;

	void Draw()override;

	void Move();

	void Init(int X);

	int GetEnemyX();
	void SetEnemyX(int x);

	int GetEnemyY();
	void SetEnemyY(int y);

	bool GetIsValid();
	void SetIsValid(bool f);
};

