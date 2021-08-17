#include "Bullet.h"
#include "Fighter.h"
#include <DxLib.h>

Fighter* fighter = new Fighter;

Bullet::Bullet()
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
    if (fighter->getShotFlag() == true)
    {
        MoveUp();
        DebugBreak();
        if (bulletY < fighter->getFighterY() - 300)
        {
            fighter->shotFlagOff();
        }

    }
}

void Bullet::Draw()
{
    if (fighter->getShotFlag() == true) 
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
