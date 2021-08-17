#include "Bullet.h"
#include "Fighter.h"
#include <DxLib.h>

Bullet::Bullet(Fighter* fighter):
    m_fighter(fighter)
{
     //���W������
    bulletX = 0;
    bulletY = 0;

    //�e�̉摜�ǂݍ���
    bulletImageHandle = LoadGraph("bullet.png");

    //�e�̉摜�̃T�C�Y���擾
    GetGraphSize(bulletImageHandle,&bulletImageW,&bulletImageH);

    //�e�̈ړ��ʂ�������
    bulletMovingDistance = 32;

}

Bullet::~Bullet()
{
}

void Bullet::Update()
{
    if (m_fighter->getShotFlag() == true)
    {
        MoveUp();

        if (bulletY < m_fighter->getFighterY() - 300)
        {
            m_fighter->shotFlagOff();
        }

    }
}

void Bullet::Draw()
{
    if (m_fighter->getShotFlag() == true)
    {
        DrawGraph(bulletX, bulletY, bulletImageHandle, true);
    }
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

void Bullet::MoveUp()
{
    bulletY -= bulletMovingDistance;
}
