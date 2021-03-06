#include<iostream>
#include"Bird.h"

Bird::Bird(int x, float y, int w, int h) {
	this->posX = x;
	this->posY = y;
	this->width = w;
	this->height = h;
	this->velocity = 0;
	this->speed = 0;
	this->isDead = false;
}

Bird::~Bird() {}

void Bird::setPosX(int x) {
	this->posX = x;
}

void Bird::setPosY(int y) {
	this->posY = y;
}

void Bird::setVelocity(float v) {
	this->velocity = v;
}

void Bird::setDead(bool d) {
	this->isDead = d;
}

void Bird::setSpeed(float s) {
	this->speed = s;
}

int Bird::getPosX() {
	return this->posX;
}

float Bird::getPosY() {
	return this->posY;
}

float Bird::getVelocity() {
	return this->velocity;
}

int Bird::getWidth() {
	return this->width;
}

int Bird::getHeight() {
	return this->height;
}

bool Bird::getDead() {
	return this->isDead;
}

void Bird::update() {
	velocity += speed;
	posY -= velocity;
	if (this->posY < 10 || this->posY > 600) isDead = true;
	if (this->posY < 10) this->posY = 10;
}

void Bird::render() {
	glColor3f(1, 0, 0);
	glRectf(posX, posY, posX + width, posY + height);
}