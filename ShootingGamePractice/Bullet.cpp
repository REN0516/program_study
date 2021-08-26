#include "Bullet.h"
#include <DxLib.h>

Bullet::Bullet()
{
     //���W������
    Init(0,0);

    //�e�̉摜�ǂݍ���
    bulletImageHandle = LoadGraph("bullet.png");

    //�e�̉摜�̃T�C�Y���擾
    GetGraphSize(bulletImageHandle,&bulletImageW,&bulletImageH);

    //�e�̈ړ��ʂ�������
    bulletMovingDistance = 16;

}

Bullet::~Bullet()
{
}

void Bullet::Update()
{
    if (bulletX>0)
    {
        Movement();
    }
}

void Bullet::Draw()
{
    if (bulletX > 0)
    {
        DrawGraph(bulletX, bulletY, bulletImageHandle, true);
    }
}

void Bullet::Init(int x, int y)
{
    bulletX = x;
    bulletY = y;
    
}

int Bullet::getBulletX()
{
    return bulletX;
}

void Bullet::setBulletX(int x)
{
    bulletX = x;
}

int Bullet::getBulletY()
{
    return bulletY;
}

void Bullet::setBulletY(int y)
{
    bulletY = y;
}

int Bullet::getBulletImageW()
{
    return bulletImageW;
}

void Bullet::setBulletImageW(int w)
{
    bulletImageW = w;
}

int Bullet::getBulletImageH()
{
    return bulletImageH;
}

void Bullet::setBulletImageH(int h)
{
    bulletImageH = h;
}

int Bullet::getBulletImageHandle()
{
    return bulletImageHandle;
}

void Bullet::setBulletImageHandle(int handle)
{
    bulletImageHandle = handle;
}

void Bullet::Movement()
{
    bulletY -= bulletMovingDistance;
}

bool const Bullet::IsUsed()
{
    if (bulletY>0)
    {
        return true;
    }
    return false;
}
