#pragma once
#include <list>
#include "Fighter.h"
#include "Enemy.h"
#include "BGManager.h"
class GameManager
{
private:
	Fighter* fighter;
	Enemy* enemy;
	BGManager* bgmanager;

	std::list<Object*> objectList;
public:
	GameManager();
	~GameManager();

	void Update();

	void Draw();
};

