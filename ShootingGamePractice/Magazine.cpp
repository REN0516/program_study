#include "Magazine.h"
#include "Bullet.h"
#include "Fighter.h"
#include "DxLib.h"

Magazine::Magazine(Fighter* f)
//:bullet{nullptr}, 
: fighter(nullptr)
{
	fighter = f;
	for (int i = 0; i < poolSize; i++)
	{
		bulletList.push_back(new Bullet);
	}
}

Magazine::~Magazine()
{
}

void Magazine::Update()
{
	for (auto it:bulletList)
	{
		if (it->getShotFlag() == true)
		{
			it->Update();
		}
	}
}

void Magazine::Draw()
{
	for (auto it : bulletList)
	{
		if (it->getShotFlag()==true)
		{
			it->Draw();
		}
	}
}

void Magazine::Fire()
{
	for (auto it:bulletList)
	{
		if (it->getShotFlag() == false)
		{
			it->setShotFlag(true);
			it->setBulletX((fighter->getFighterImageW() - it->getBulletImageW()) / 2 + fighter->getFighterX());
			it->setBulletY((fighter->getFighterImageH() - it->getBulletImageH()) / 2 + fighter->getFighterY());
			break;
		}
	}
}
