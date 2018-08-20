#pragma once
#include "PongTable.h"
#include <cmath>

void pongModel::PongTable::hitLeftWall()
{
	if (ball->getX() < 0) {
		rightScore++;
		resetBall();
		ball->setXVelocity(fabs(ball->getXVelocity()));
		ball->setYVelocity(0);
	}
}

void pongModel::PongTable::hitRightWall()
{
	if (ball->getX() > width) {
		leftScore++;
		resetBall();
		ball->setXVelocity(-fabs(ball->getXVelocity()));
		ball->setYVelocity(0);
	}
}

void pongModel::PongTable::hitBottom()
{
	if (ball->getY() > height) 
		ball->setYVelocity(fabs(ball->getYVelocity()));
	
}

void pongModel::PongTable::hitTop()
{
	if(ball->getY() < 0 )
		ball->setYVelocity(-fabs(ball->getYVelocity()));
}

void pongModel::PongTable::hitLeftPaddle()
{
	if (ball->getX() <= paddleLeft->getX() &&
		ball->getY() <= paddleLeft->getTopY()&&
		ball->getY() >= paddleLeft->getBottomY()) 
	{

			float bounceDir = ((ball->getY() - paddleLeft->getY()) / paddleLeft->getHeight()) - 0.5f;
			ball->setXVelocity(fabs(ball->getXVelocity()));
			ball->setYVelocity(bounceDir);
	}
}

void pongModel::PongTable::hitRightPaddle()
{
	if (ball->getCoords() > paddleRight->getCoords() &&
		ball->getCoords() < paddleRight->getAreaCoords()) {
		
			float bounceDir = ((ball->getY() - paddleRight->getY()) / paddleRight->getHeight()) - 0.5f;
			ball->setXVelocity(-fabs(ball->getXVelocity()));
			ball->setYVelocity(bounceDir);
	}
}




pongModel::PongTable::PongTable(Paddle *paddle_one, Paddle *paddle_two, Ball *ball, int width, int height) {
	// TODO - implement PongTable::PongTable
	leftScore = 0;
	rightScore = 0;
	this->ball = ball;
	this->paddleLeft = paddle_one;
	this->paddleRight = paddle_two;
	this->width = width;
	this->height = height;
}

void pongModel::PongTable::updateBall() {
	this->ball->move();
	hitLeftPaddle();
	hitRightPaddle();
	hitLeftWall();
	hitRightWall();
	hitTop();
	hitBottom();
	ball->normalizeVelocity();
}

void pongModel::PongTable::resetBall()
{
	this->ball->setX(width / 2);
	this->ball->setY(height / 2);
}
int pongModel::PongTable::getLeftScore()
{
	return this->leftScore;
}

int pongModel::PongTable::getRightScore()
{
	return this->rightScore;
}







