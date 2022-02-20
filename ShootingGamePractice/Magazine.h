#pragma once
class Bullet;
class Fighter;
class Magazine
{
private:

	//�v�[���̑傫��
	static const int poolSize = 100;
	
	//�e�̔z��
	Bullet* bullet[poolSize];

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

