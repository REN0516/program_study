#pragma once
#include<List>
#include"Enemy.h"
class EnemyManager:public Object
{
private:
	Enemy* enemy;
	std::list<Enemy*> enemyList;
public:
	//EnemyManager�̃R���X�g���N�^�ƃf�X�g���N�^
	EnemyManager();
	~EnemyManager();

	//�G�l�~�[��Update������
	void Update();
	//�G�l�~�[��Draw������
	void Draw();
	//�����_�����W����
	void RandomCoordinateGenerator();
};

