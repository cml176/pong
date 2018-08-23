#include <windows.h>
#include <iostream>                 
#include "../model/model_headers/PongTable.h"
#include "../freeglut/include/GL/freeglut.h"
#include "../freeglut/include/GL/glut.h"
#pragma comment(lib, "OpenGL32.lib")
#include "PongView.h"


PongView::PongView(const pongModel::PongTable &model)
: model(model)
{
	initGLUT();
}

void PongView::setModel(const pongModel::PongTable &model)
{
	this->model = model;
}

void PongView::initGLUT()
{
	gluInit(0,0);
	gluInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(model.getWidth(), model.getHeight());
	glutCreateWindow("Pong");
	
	//start loop
	glutMainLoop();
}