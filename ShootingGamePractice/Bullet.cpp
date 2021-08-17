#include "Bullet.h"
#include "Fighter.h"
#include <DxLib.h>

Bullet::Bullet(Fighter* fighter):
    m_fighter(fighter)
{
     //座標初期化
    bulletX = 0;
    bulletY = 0;

    //弾の画像読み込み
    bulletImageHandle = LoadGraph("bullet.png");

    //弾の画像のサイズを取得
    GetGraphSize(bulletImageHandle,&bulletImageW,&bulletImageH);

    //弾の移動量を初期化
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
