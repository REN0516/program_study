#include "GameManager.h"


GameManager::GameManager()
{
	bgmanager = new BGManager;
	fighter = new Fighter;
	enemyManager = new EnemyManager;

	objectList.push_back(bgmanager);
	objectList.push_back(enemyManager);
	objectList.push_back(fighter);
}

GameManager::~GameManager()
{
	delete bgmanager;
	delete fighter;
	delete enemyManager;
}

void GameManager::Update()
{
	for (auto it:objectList)
	{
		it->Update();
	}
}

void GameManager::Draw()
{
	for (auto it : objectList)
	{
		it->Draw();
	}
}