#pragma once
class Object
{
protected:
	//���̃I�u�W�F�N�g�������Ă�����W
	int x;
	int y;

	//�퓬�@�̉摜�̃n���h��
	int imageHandle;

	//�퓬�@�̉摜�̉����ƁA����
	int imageW;
	int imageH;

	//�ړ���
	int movingDistance;
public:

	 Object();
	~Object();

	//���t���[���̏���
	virtual void Update();

	//���t���[���̕`��
	virtual void Draw();
};