#include "Ball.h"

pongModel::Ball::Ball(int int_x, int int_y, int int_xVelocity, int int_yVelocity) {
	// TODO - implement Ball::Ball
	throw "Not yet implemented";
}

int pongModel::Ball::getX() {
	return this->x;
}

int pongModel::Ball::getY() {
	return this->y;
}

int pongModel::Ball::getXVelocity() {
	return this->xVelocity;
}

int pongModel::Ball::getYVelocity() {
	return this->yVelocity;
}

void pongModel::Ball::move() {
	// TODO - implement Ball::move
	x = x*xVelocity;
	y = y*yVelocity;
}

pongModel::Coordinates pongModel::Ball::getCoords() {
	// TODO - implement Ball::getCoords
}
