#include "Paddle.h"

pongModel::Paddle::Paddle(int x, int y, int int_w, int int_h) {
	// TODO - implement Paddle::Paddle
	this->x = x;
	this->y = y;
	width = int_w;
	height = int_h;
}

int pongModel::Paddle::getLeftX() {
	// TODO - implement Paddle::getLeftX
	return (x-(.5*width));
}

int pongModel::Paddle::getRightX() {
	// TODO - implement Paddle::getRightX
	return (x+(.5*width));
}

int pongModel::Paddle::getTopY() {
	// TODO - implement Paddle::getTopY
	return (y+(.5*height));
}

int pongModel::Paddle::getBottomY() {
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


pongModel::Coordinates pongModel::Paddle::getCoords() {
	// TODO - implement Paddle::getCoords
	return new Coordinates(x,y);
}
