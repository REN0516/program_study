#pragma once
#include"Object.h"

class Enemy:public Object
{
private:
	
public:
	//�G�l�~�[�̃R���X�g���N�^�ƃf�X�g���N�^
	Enemy();
	~Enemy();

	void Update()override;

	void Draw()override;
};

