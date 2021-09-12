#include "Magazine.h"
#include "Bullet.h"
#include "Fighter.h"
#include "DxLib.h"

Magazine::Magazine(Fighter* f)
	:bullet{ nullptr }, fighter(nullptr)
{
	fighter = f;
	for (int i = 0; i < poolSize; i++)
	{
		bullet[i] = new Bullet;
	}
}

Magazine::~Magazine()
{
}

void Magazine::MakeBullet(int x, int y)
{
	for (int i = 0; i < poolSize; i++)
	{
		if (!bullet[i]->IsUsed())
		{
			bullet[i]->Init(0,0);
			//break;
		}
	}
}

void Magazine::Update()
{
	for (int i = 0; i < poolSize; i++)
	{
		if (bullet[i]->getShotFlag() == true)
		{
			bullet[i]->Update();
		}
	}
}

void Magazine::Draw()
{
	for (int i = 0; i < poolSize; i++)
	{
		if (bullet[i]->getShotFlag()==true)
		{
			bullet[i]->Draw();
		}
	}
}

void Magazine::Load()
{
	for (int i = 0; i < poolSize; i++)
	{
		if (bullet[i]->getShotFlag()==false)
		{
			bullet[i]->setBulletX((fighter->getFighterImageW() - bullet[i]->getBulletImageW()) / 2 + fighter->getFighterX());
			bullet[i]->setBulletY((fighter->getFighterImageH() - bullet[i]->getBulletImageH()) / 2 + fighter->getFighterY());
			bullet[i]->setShotFlag(true);
			break;
		}
	}
}
