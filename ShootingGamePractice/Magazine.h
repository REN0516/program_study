#pragma once
#include <List>

class Bullet;
class Fighter;
class Magazine
{
private:

	//�v�[���̑傫��
	static const int poolSize = 1;
	
	//�e�̔z��
	//Bullet* bullet[poolSize];
	std::list <Bullet*> bulletList;

	//Fighter�N���X
	Fighter* fighter;

public:

	Magazine(Fighter* f);
	~Magazine();

	//���t���[���̏���
	void Update();

	//���t���[���̕`��
	void Draw();

	//�e�̂𔭎�
	void Fire();
};

