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

	//�e�����
	void MakeBullet(int x, int y);

	//���t���[���̏���
	void Update();

	//���t���[���̕`��
	void Draw();

	//�e�̈ʒu���Z�b�g
	void Load();
};

