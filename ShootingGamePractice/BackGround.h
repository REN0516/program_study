#pragma once
#include <iostream>
#include<string>
class BackGround
{
private:
	//�w�i��x,y���W
	int bgX;
	int bgY;

	//�w�i�̉摜�̃n���h��
	int bgImageHandle;

	//�w�i�̉摜�̉����ƁA����
	//int bgImageW;
	//int bgImageH;

	//�ړ���
	int bgMovingDistance;
public:
		//BackGround�N���X�̃R���X�g���N�^�ƃf�X�g���N�^
		BackGround();
		~BackGround();

		//���t���[���̏���
		void Update();

		//���t���[���̕`��
		void Draw();

		//�����ʒu
		void PositionSetting(int x,int y);

		//�w�i�摜�̃n���h�����Z�b�g
		void setBGImageHndle(int handle);

		//�ړ��ʂ��Z�b�g
		void setBGMovingDistance(int movingDistance);

		//�c�ړ�����
		void VerticalMove();

		//�ŏ��̈ʒu�ɖ߂�����
		void Restore();
};