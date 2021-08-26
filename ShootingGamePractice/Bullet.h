#pragma once
class Fighter;
class Bullet
{
private:
	//’e‚Ìx,y²
	int bulletX;
	int bulletY;

	//’e‰æ‘œ‚Ìc•A‰¡•
	int bulletImageW;
	int bulletImageH;

	//’e‰æ‘œ‚Ìƒnƒ“ƒhƒ‹
	int bulletImageHandle;

	//ˆÚ“®—Ê
	int bulletMovingDistance;

public:
	Bullet();
	~Bullet();

	//–ˆƒtƒŒ[ƒ€‚Ìˆ—
	void Update();

	//–ˆƒtƒŒ[ƒ€‚Ì•`‰æ
	void Draw();

	//‰Šú‰»
	void Init(int x, int y);

	//’e‚Ìx²‚ÌgetterAsetter
	int getBulletX();
	void setBulletX(int x);

	//’e‚Ìy²‚ÌgetterAsetter
	int getBulletY();
	void setBulletY(int y);

	//’e‚Ì‰æ‘œ‚Ì‰¡•‚ÌgetterAsetter
	int getBulletImageW();
	void setBulletImageW(int w);

	//’e‚Ì‰æ‘œ‚Ìc•‚ÌgetterAsetter
	int getBulletImageH();
	void setBulletImageH(int h);
		
	//’e‚Ì‰æ‘œ‚Ìƒnƒ“ƒhƒ‹
	int getBulletImageHandle();
	void setBulletImageHandle(int handle);

	//’e‚Ì“®‚«
	void Movement();
	
	//”­Ë‚³‚ê‚Ä‚¢‚é‚©‚ğ•Ô‚·
	bool const IsUsed();
};

