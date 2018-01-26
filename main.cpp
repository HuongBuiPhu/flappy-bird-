#include"Game.h"

using namespace game;

int main() {
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);

	glutInitWindowSize(600, 600);
	glutInitWindowPosition(300, 80);
	glutCreateWindow("Flappy Bird");

	init();

	glutReshapeFunc(reshape);
	glutDisplayFunc(display);
	glutTimerFunc(1000 / FPS, timer, 0);

	glutMainLoop();
}
