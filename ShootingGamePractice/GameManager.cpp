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
	delete bgmanager;
	delete fighter;
	delete enemy;
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