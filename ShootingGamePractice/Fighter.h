#pragma once

class Bullet;
class Fighter
{
private:

	//�퓬�@��x,y���W
	int fighterX;
	int fighterY;

	//�퓬�@�̉摜�̃n���h��
	int fighterImageHandle;

	//�퓬�@�̉摜�̉����ƁA����
	int fighterImageW;
	int fighterImageH;

	//�e���˃t���O
	bool shotFlag;

	//�ړ���
	int fighterMovingDistance;

	//�e�N���X
	Bullet* mBullet;
				
public:

	//Fighter�N���X�̃R���X�g���N�^�ƃf�X�g���N�^
	Fighter();
	~Fighter();

	//���t���[���̏���
	void Update();

	//���t���[���̕`��
	void Draw();

	//�퓬�@��x���W��getter�Asetter
	 int getFighterX();
	 void setFighterX(int x);
 
	 //�퓬�@��y���W��getter�Asetter
	 int getFighterY();
	 void setFighterY(int y);

	 //�퓬�@�摜�̃n���h����getter�Asetter
	 int getFighterImageHandle();
	 void setFighterImageHandle(int handle);

	 //�퓬�@�摜�̉�����getter�Asetter
	 int getFighterImageW();
	 void setFighterImageW(int w);

	 //�퓬�@�摜�̏c����getter�Asetter
	 int getFighterImageH();
	 void setFighterImageH(int h);

	 //�ړ��ʂ�getter�Asetter
	 int getMovingDistance();
	 void setMovingDistance(int m);

	 //���˃t���O��getter
	 bool getShotFlag();

	 //���˃t���O�؂�ւ�
	 const void shotFlagOn();
	 const void shotFlagOff();

	 //��Ɉړ�
	 void MoveUp();

	 //���Ɉړ�
	 void MoveDown();

	 //���Ɉړ�
	 void MoveLeft();
	 
	 //�E�Ɉړ�
	 void MoveRight();
	 	 
};

