#pragma once

#include<stdlib.h>
#include<ctime>


#include<gl/glut.h>
#include<gl/GLU.h>
#include<gl/GL.h>

class Pillar {
private:
	int posX, posY, width, heigh;
public:
	Pillar(int x, int y, int w, int h);
	~Pillar();
	virtual void render();
	virtual void update();
	int getPosX();
	int getPosY();
	int getWidth();
	int getHeight();
	void setPosX(int x);
	void setPosY(int min, int max);
};

