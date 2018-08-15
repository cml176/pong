#ifndef PONGTABLE_H
#define PONGTABLE_H

namespace pongModel {
	class PongTable {

	private:
		int width;
		int height;
		int leftScore, rightScore;
		pongModel::Paddle *paddleLeft;
		pongModel::Paddle *paddleRight;
		pongModel::Ball *ball;
		
		void hitLeftWall();
		
		void hitRightWall();

		void hitBottom();

		void hitTop();

		void hitLeftPaddle();

		void hitRightPaddle();



	public:
		PongTable(pongModel::Paddle paddle_one, pongModel::Paddle paddle_two, pongModel::Ball ball, int width, int height);
		void updateBall();
		int getLeftScore();
		int getRightScore();
		

	};
}

#endif
