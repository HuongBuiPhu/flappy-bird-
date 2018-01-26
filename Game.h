#pragma once

#include<stdlib.h>

#include<gl/glut.h>
#include<gl/GLU.h>
#include<gl/GL.h>
#include"Pillar.h"

#define FPS 20

static Pillar *p1;

namespace game {

	void init();//khoi tao
	void display();//man hinh
	void reshape(int w, int h);//he toa do va phep chieu
	void input();//ban phim
	void drawText();//hien thi diem
	void timer(int);

}


