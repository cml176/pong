#include <windows.h>
#include <iostream>   
#include <gl\gl.h>
#include <gl\glu.h>               
#include "../model/model_headers/PongTable.h"
#include "../freeglut/include/GL/freeglut.h"
#pragma comment(lib, "OpenGL64.lib")
#include "PongView.h"
PongView::PongView(PongTable &model): model(model){
	initGLUT();
	return 0;
}

void PongView::setModel(PongTable &model)
{
	this->model = model;
}

void PongView::initGLUT(){
	gluInit(&argc, argv);
	gluInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(model.getWidth(), model.getHeight());
	glutCreateWindow("Pong");
	
	//start loop
	glutMainLoop();
}