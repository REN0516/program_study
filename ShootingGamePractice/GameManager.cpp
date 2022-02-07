#include "GameManager.h"


GameManager::GameManager()
{
	bgmanager = new BGManager;
	fighter = new Fighter;
	enemy = new Enemy;

	objectList.push_back(bgmanager);
	objectList.push_back(enemy);
	objectList.push_back(fighter);
}

GameManager::~GameManager()
{
}

void GameManager::All()
{
	for (auto it:objectList)
	{
		it->Update();
		it->Draw();
	}
}