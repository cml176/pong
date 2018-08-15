#ifndef PONGTABLE_H
#define PONGTABLE_H

namespace pongModel {
	class PongTable {

	private:
		int width;
		int height;
		pongModel::Paddle *paddleOne;
		pongModel::Paddle *paddleTwo;
		pongModel::Ball *ball;

	public:
		PongTable(Paddle paddle_one, Paddle paddle_two, Ball ball, int width, int height);

		pongModel::void updateBall();

		pongModel::Coordinates getPaddleTwoPosition();

		pongModel::Coordinates getBallCoords();

	};
}

#endif
