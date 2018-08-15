#include "PongTable.h"

pongModel::PongTable::PongTable(Paddle paddle_one, Paddle paddle_two, Ball ball, int width, int height) {
	// TODO - implement PongTable::PongTable
	this->ball = ball;
	this->paddleOne = paddle_one;
	this->paddleTwo = paddle_two;
	this->width = width;
	this->height = height;
}

pongModel::Coordinates pongModel::PongTable::getPaddleOnePosition() {
	// TODO - implement PongTable::getPaddleOnePosition
	return paddleOne->getCoords();
}

pongModel::Coordinates pongModel::PongTable::getPaddleTwoPosition() {
	// TODO - implement PongTable::getPaddleTwoPosition
	return paddleTwo->getCoords();
}

pongModel::Coordinates pongModel::PongTable::getBallCoords() {
	// TODO - implement PongTable::getBallCoords
	return ball->getCoords();
}


