#include"Game.h"

void game::init() {
	glClearColor(0, 0, 0, 1);
}

void game::reshape(int w, int h) {
	glViewport(0, 0, w, h);//thiet lap min hinh

	glMatrixMode(GL_PROJECTION);//ma tran he toa do
	glLoadIdentity();

	glOrtho(-300, 300, -300, 300, 0, 10);//phep chieu truc giao
}

void game::display() {
	glClear(GL_COLOR_BUFFER_BIT);

	//character here

	glutSwapBuffers();
}

void game::input(){}

void game::drawText(){}