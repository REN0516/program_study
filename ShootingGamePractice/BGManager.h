#pragma once
#include"BackGround.h"
#include"Object.h"
class BGManager:public Object
{
private:
	//�X�N���[������̂ɓ񖇕K�v
	BackGround* firstBackGround;
	BackGround* secondBackGround;

	//���̉_�̔w�i
	BackGround* firstunderCloud;
	BackGround* secondunderCloud;

	//��̉_�̔w�i
	BackGround* firsttopCloud;
	BackGround* secondtopCloud;

	//�e�̔w�i
	BackGround* firstShadow;
	BackGround* secondShadow;

public:
	//BackGround�N���X�̃R���X�g���N�^�ƃf�X�g���N�^
	BGManager();
	~BGManager();

	//���t���[���̏���
	void Update() override;

	//���t���[���̕`��
	void Draw() override;
};