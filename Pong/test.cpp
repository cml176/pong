#include"PongTable.h"
#include<cstdio>
using namespace pongModel;
int main() {
	//set up pong model
	const int width = 300;
	const int height = 300;
	Ball *ball = new Ball(width/2, height/2, 1,0,3);
	Paddle *leftPaddle = new Paddle(10, height/2, 25, 50);
	Paddle *rightPaddle = new Paddle(width-10, height/2, 25, 50);
	PongTable table = PongTable(leftPaddle, rightPaddle, ball, width, height);
	//Show Coords of Ball object
	std::printf("Coords of Ball: (%f,%f)\n", ball->getX(), ball->getY());
	std::printf("using table.updateBall()\n");
	//Update Ball using PongTable
	table.updateBall();
	//Show new Coords of Ball object
	std::printf("Coords of Ball: (%f,%f)\n", ball->getX(), ball->getY());
	std::printf("Left Player initial score: %d\n", table.getLeftScore());
	std::printf("Right Player initial score: %d\n", table.getRightScore());
	std::printf("finished using methods\n");
	//set up pong view
		//TODO:
	//set up pong controller 
		//TODO:
		
	std::getchar();
	return 0;
}