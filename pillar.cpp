#include"Pillar.h"

Pillar::Pillar(int x, int y, int w, int h) {
	this->posX = x;
	this->posY = y;
	this->width = w;
	this->heigh = h;

}

Pillar::~Pillar() {}

int Pillar::getPosX() {
	return this->posX;
}

int Pillar::getPosY() {
	return this->posY;
}

int Pillar::getWidth() {
	return this->width;
}

int Pillar::getHeight() {
	return this->heigh;
}

void Pillar::setPosX(int x) {
	this->posX = x;
}

void Pillar::setPosY(int min, int max) {
	srand(time(NULL));
	this->posY = rand() % max + min;
}

void Pillar::update() {
	this->posX -= 5;
	if (posX < -70) {
		posX = 650;
		setPosY(100, 280);
	}
}

void Pillar::render() {
	glColor3f(1, 0, 0);
	glRectf(posX, posY, posX + width, posY + heigh);
}