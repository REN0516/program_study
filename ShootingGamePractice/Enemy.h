#pragma once
#include"Object.h"

class Enemy:public Object
{
private:
	bool isValid;
	Enemy* enemy;
public:
	//�G�l�~�[�̃R���X�g���N�^�ƃf�X�g���N�^
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

