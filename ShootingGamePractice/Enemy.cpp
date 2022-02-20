#include"Enemy.h"
#include"DxLib.h"

Enemy::Enemy(int X)
{
	Init(X);
}

Enemy::~Enemy()
{
}

void Enemy::Update()
{
	if (isValid == true)
	{
		Move();
	}
	if (y >=960)
	{
		isValid = false;
	}
}

void Enemy::Draw()
{
	if (isValid == true)
	{
		DrawGraph(x, y, imageHandle, true);
	}
}

void Enemy::Move()
{
	y += movingDistance;
}

void Enemy::Init(int X)
{
	imageHandle = LoadGraph("Enemy.png");
	GetGraphSize(imageHandle,&imageW,&imageH);

	x = X;
	y = 0;

	movingDistance = 8;

	isValid = true;
}

int Enemy::GetEnemyX()
{
	return 0;
}

void Enemy::SetEnemyX(int X)
{
	x = X;
}

int Enemy::GetEnemyY()
{
	return 0;
}

void Enemy::SetEnemyY(int Y)
{
	y = Y;
}

bool Enemy::GetIsValid()
{
	return isValid;
}

void Enemy::SetIsValid(bool f)
{
	isValid = f;
}
