#pragma once
#include <list>
#include "Fighter.h"
#include "EnemyManager.h"
#include "BGManager.h"
class GameManager
{
private:
	Fighter* fighter;
	EnemyManager* enemyManager;
	BGManager* bgmanager;

	std::list<Object*> objectList;
public:
	GameManager();
	~GameManager();

	void Update();

	void Draw();
};

