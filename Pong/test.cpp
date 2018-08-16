#include"PongTable.cpp"


using namespace pongModel;


int main() {
	const int width = 300;
	const int height = 300;
	Ball ball = Ball(width/2, height/2, 1,0,5);
	Paddle leftPaddle = Paddle(10, height/2, 25, 50);
	Paddle rightPaddle = Paddle(width-10, height/2, 25, 50);
	PongTable table = PongTable(leftPaddle, rightPaddle, ball, width, height);




	return 0;
}