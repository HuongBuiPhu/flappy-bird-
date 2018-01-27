#pragma once

#include<stdlib.h>
#include<ctime>

#include"Pillar.h"


class Obstacle {
private:
	bool isActive;
	int posX, posY;
	Pillar *top;
	Pillar *bottom;
public:
	Obstacle();
	Obstacle(int x, int y);
	~Obstacle();
	int random(int min, int max);
	void setActive(bool a);
	int getPosX();
	int getPosY();
	bool getActive();
	Pillar* getTop();
	Pillar* getBottom();
	void update();
	void render();
};
