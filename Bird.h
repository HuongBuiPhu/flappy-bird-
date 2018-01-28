#pragma once

#include<gl/glut.h>
#include<gl/GLU.h>
#include<gl/GL.h>

class Bird {
private:
	int posX, width, height;
	float posY, velocity, speed;
	bool isDead;
public:
	Bird(int x, float y, int w, int h);
	~Bird();
	void setPosX(int x);
	void setPosY(int y);
	void setVelocity(float v);
	void setDead(bool isDead);
	void setSpeed(float s);
	bool getDead();
	int getPosX();
	float getPosY();
	float getVelocity();
	int getWidth();
	int getHeight();
	void update();
	void render();
};