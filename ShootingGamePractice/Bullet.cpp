#include "Bullet.h"
#include <DxLib.h>

Bullet::Bullet()
{
     //座標初期化
    Init(0,0);

    //弾の画像読み込み
    bulletImageHandle = LoadGraph("bullet.png");

    //弾の画像のサイズを取得
    GetGraphSize(bulletImageHandle,&bulletImageW,&bulletImageH);

    //弾の移動量を初期化
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
