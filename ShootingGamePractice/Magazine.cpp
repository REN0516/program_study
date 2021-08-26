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
			return;
		}
	}
}

void Magazine::Update()
{
	for (int i = 0; i < poolSize; i++)
	{
		if (bullet[i]->IsUsed())
		{
			bullet[i]->Update();
			return;
		}
	}
}

void Magazine::Draw()
{
	for (int i = 0; i < poolSize; i++)
	{
		if (bullet[i]->IsUsed())
		{
			bullet[i]->Draw();
			return;
		}
	}
}

void Magazine::Load()
{
	for (int i = 0; i < poolSize; i++)
	{
		if (!bullet[i]->IsUsed())
		{
			bullet[i]->setBulletX((fighter->getFighterImageW() - bullet[i]->getBulletImageW()) / 2 + fighter->getFighterX());
			bullet[i]->setBulletY((fighter->getFighterImageH() - bullet[i]->getBulletImageH()) / 2 + fighter->getFighterY());
			break;
		}
	}
}
