#pragma once
class Fighter;
class Bullet
{
private:
	//�e��x,y��
	int bulletX;
	int bulletY;

	//�e�摜�̏c���A����
	int bulletImageW;
	int bulletImageH;

	//�e�摜�̃n���h��
	int bulletImageHandle;

	//�ړ���
	int bulletMovingDistance;

public:
	Bullet();
	~Bullet();

	//���t���[���̏���
	void Update();

	//���t���[���̕`��
	void Draw();

	//������
	void Init(int x, int y);

	//�e��x����getter�Asetter
	int getBulletX();
	void setBulletX(int x);

	//�e��y����getter�Asetter
	int getBulletY();
	void setBulletY(int y);

	//�e�̉摜�̉�����getter�Asetter
	int getBulletImageW();
	void setBulletImageW(int w);

	//�e�̉摜�̏c����getter�Asetter
	int getBulletImageH();
	void setBulletImageH(int h);
		
	//�e�̉摜�̃n���h��
	int getBulletImageHandle();
	void setBulletImageHandle(int handle);

	//�e�̓���
	void Movement();
	
	//���˂���Ă��邩��Ԃ�
	bool const IsUsed();
};

