#include "Ball.h"

pongModel::Ball::Ball(float x, float y, float xVelocity, float yVelocity, int speed) {
	// TODO - implement Ball::Ball
	this->x = x;
	this->y = y;
	this->xVelocity = xVelocity;
	this->yVelocity = yVelocity;
	this->speed = speed;
}

float pongModel::Ball::getX() {
	return this->x;
}

float pongModel::Ball::getY() {
	return this->y;
}

float pongModel::Ball::getXVelocity() {
	return this->xVelocity;
}

float pongModel::Ball::getYVelocity() {
	return this->yVelocity;
}

void pongModel::Ball::setYVelocity(float v)
{
	this->yVelocity = v;
}

void pongModel::Ball::setXVelocity(float v)
{
	this->xVelocity = v;
}

int pongModel::Ball::getSpeed() {
	return this->speed;
}

void pongModel::Ball::move() {
	// TODO - implement Ball::move
	x = xVelocity*speed;
	y = yVelocity*speed;
}

void pongModel::Ball::resetBall()
{
	this->x = width / 2;
	this->y = height / 2;
}

void pongModel::Ball::normalizeVelocity()
{
	float length = sqrt((xVelocity * xVelocity) + (yVelocity * yVelocity));
	if (length != 0.0f) {
		length = 1.0f / length;
		xVelocity *= length;
		yVelocity *= length;
	}

}


pongModel::Coordinates pongModel::Ball::getCoords() {
	return new Coordinates(x, y);
}
