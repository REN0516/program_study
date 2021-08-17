#pragma once
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

	int getBulletX();
	void setBulletX(int x);

	int getBulletY();
	void setBulletY(int y);

	int getBulletImageW();
	void setBulletImageW(int w);

	int getBulletImageH();
	void setBulletImageH(int h);
		
	int getBulletImageHandle();
	void setBulletImageHandle(int handle);

	void MoveUp();

};

