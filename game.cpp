#include"Game.h"

void game::init() {
	glClearColor(0, 0, 0, 1);

	p1 = new Pillar(400, 250, 30, -400);
}

void game::reshape(int w, int h) {
	glViewport(0, 0, w, h);//thiet lap min hinh

	glMatrixMode(GL_PROJECTION);//ma tran he toa do
	glLoadIdentity();

	glOrtho(0, 600, 0, 600, 0, 10);//phep chieu truc giao
}

void game::display() {
	glClear(GL_COLOR_BUFFER_BIT);
	//character here

	p1->update();
	p1->render();


	glutSwapBuffers();
	glFlush();
}

void game::timer(int) {
	glutPostRedisplay();
	glutTimerFunc(1000 / FPS, timer, 0);
}

void game::input() {}

void game::drawText() {}