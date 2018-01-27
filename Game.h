#pragma once

#include<iostream>
#include<string>

#include"Obstacle.h"
#include"Bird.h"

using namespace std;

namespace game {

	static int fps = 18;
	static Obstacle *ob[4];
	static Bird *b;
	static int point;
	static string mark;
	void init();//khoi tao
	void display();//man hinh
	void reshape(int w, int h);//he toa do va phep chieu
	void input(int key, int, int);//ban phim
	void drawText();//hien thi diem
	void timer(int);
	bool collisionWithTop(Pillar *p, Bird *b);
	bool collisionWithBottom(Pillar *p, Bird *b);

}


