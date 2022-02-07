#pragma once
#include"Object.h"

class Enemy:public Object
{
private:
	
public:
	//エネミーのコンストラクタとデストラクタ
	Enemy();
	~Enemy();

	void Update()override;

	void Draw()override;
};

