#include"PongTable.h"



using namespace pongModel;


int main() {
	//set up pong model
	const int width = 300;
	const int height = 300;
	Ball ball = Ball::Ball(width/2, height/2, 1,0,5);
	Paddle leftPaddle = Paddle::Paddle(10, height/2, 25, 50);
	Paddle rightPaddle = Paddle::Paddle(width-10, height/2, 25, 50);
	PongTable table = PongTable(leftPaddle, rightPaddle, ball, width, height);
	//set up pong view
		//TODO:
	//set up pong controller 
		//TODO:
	return 0;
}