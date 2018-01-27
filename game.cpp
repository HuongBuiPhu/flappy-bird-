#include"Game.h"

void game::init() {
	glClearColor(0, 0, 1, 1);
	point = 0;
	mark = "mark";

	b = new Bird(150, 500, 30, 30);

	ob[0] = new Obstacle(400, 300);
	ob[1] = new Obstacle(600, 270);
	ob[2] = new Obstacle(800, 290);
	ob[3] = new Obstacle(1000, 320);
}

void game::reshape(int w, int h) {
	glViewport(0, 0, w, h);//thiet lap min hinh

	glMatrixMode(GL_PROJECTION);//ma tran he toa do
	glLoadIdentity();

	glOrtho(0, 600, 0, 600, 10, 0);//phep chieu truc giao
}

void game::display() {
	glClear(GL_COLOR_BUFFER_BIT);
	//character here
	b->update();
	b->render();

	for (int i = 0; i < 4; i++) {
		ob[i]->update();
		ob[i]->render();
		if (ob[i]->getActive() == true) {
			if (collisionWithTop(ob[i]->getTop(), b) ||
				collisionWithBottom(ob[i]->getBottom(), b)) {
				b->setDead(true);
			}
			if ((ob[i]->getPosX() + ob[i]->getBottom()->getWidth() + 5) == b->getPosX()) {
				point++;
			}
		}
	}

	drawText();

	if (b->getDead() == true) fps = 0;

	glutSwapBuffers();
	glFlush();
}

void game::timer(int) {
	if (fps > 0) {
		glutPostRedisplay();
		glutTimerFunc(500 / fps, timer, 0);
	}
}

void game::input(int key, int, int) {
	if (key == GLUT_KEY_UP) {
		b->setVelocity(-13);
	}
}

void game::drawText() {
	glColor3f(1, 1, 1);
	mark = "Score: " + to_string(point);
	glRasterPos2i(250, 580);
	for (size_t i = 0; i < mark.size(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, mark[i]);
	}
}

bool game::collisionWithTop(Pillar *p, Bird *b) {
	if (b->getPosX() + b->getWidth() < p->getPosX()) return false;
	if ((b->getPosY() + b->getHeight() + 2) < p->getPosY()) return false;
	if (b->getPosX() > (p->getPosX() + p->getWidth())) return false;
	return true;
}

bool game::collisionWithBottom(Pillar *p, Bird *b) {
	if (b->getPosX() + b->getWidth() < p->getPosX()) return false;
	if (b->getPosX() > p->getPosX() + p->getWidth()) return false;
	if (b->getPosY()-3 > p->getPosY()) return false;
	return true;
}
