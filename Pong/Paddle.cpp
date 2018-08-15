#include "Paddle.h"

pongModel::Paddle::Paddle(float x, float y, float int_w, float int_h) {
	// TODO - implement Paddle::Paddle
	this->x = x;
	this->y = y;
	width = int_w;
	height = int_h;
}

float pongModel::Paddle::getLeftX() {
	// TODO - implement Paddle::getLeftX
	return (x-(.5*width));
}

float pongModel::Paddle::getRightX() {
	// TODO - implement Paddle::getRightX
	return (x+(.5*width));
}

float pongModel::Paddle::getTopY() {
	// TODO - implement Paddle::getTopY
	return (y+(.5*height));
}

float pongModel::Paddle::getBottomY() {
	// TODO - implement Paddle::getBottomY
	return (y-(.5*height));
}

void pongModel::Paddle::moveDown(int d) {
	// TODO - implement Paddle::moveDown
	y = y - d;
}

void pongModel::Paddle::moveUp(int d) {
	// TODO - implement Paddle::moveUp
	y = y + d;
}

float pongModel::Paddle::getHeight() {
	return this->height;
}

float pongModel::Paddle::getWidth() {
	return this->width;
}

pongModel::Coordinates pongModel::Paddle::getCoords() {
	// TODO - implement Paddle::getCoords
	return new pongModel::Coordinates(x,y);
}

pongModel::Coordinates pongModel::Paddle::getAreaCoords()
{
	return new pongModel::Coordinates(x+width, y+height);
}
