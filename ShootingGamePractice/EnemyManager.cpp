#include "EnemyManager.h"
#include "DxLib.h"
#include "Enemy.h"

EnemyManager::EnemyManager()
{	
	enemy = new Enemy(GetRand(480));
	enemyList.push_back(enemy);
}

EnemyManager::~EnemyManager()
{
}

void EnemyManager::Update()
{
	for (auto it : enemyList)
	{
		if (it->GetIsValid()==false)
		{
			it->SetEnemyY(-8);
			it->SetEnemyX(GetRand(480));
			it->SetIsValid(true);
		}
			it->Update();
	}
}

void EnemyManager::Draw()
{
	for (auto it : enemyList)
	{
			it->Draw();
	}
}

void EnemyManager::RandomCoordinateGenerator()
{	
}
