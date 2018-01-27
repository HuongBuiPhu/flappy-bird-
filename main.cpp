#include"Game.h"

using namespace game;

int main() {
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);

	glutInitWindowSize(600, 600);
	glutInitWindowPosition(300, 80);
	glutCreateWindow("Flappy Bird");

	init();
	while (1) {
		glutReshapeFunc(reshape);
		glutDisplayFunc(display);
		if (fps > 0) {
			glutTimerFunc(500 / fps, timer, 0);
		}

		glutSpecialFunc(input);
		glutMainLoop();
	}
	
}
