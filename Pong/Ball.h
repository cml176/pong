#ifndef BALL_H
#define BALL_H

namespace pongModel {
	class Ball {

	private:
		int x;
		int y;
		float xVelocity;
		float yVelocity;

	public:
		Ball(int int_x, int int_y, int int_xVelocity, int int_yVelocity);

		int getX();

		int getY();

		int getXVelocity();

		int getYVelocity();

		void move();

		pongModel::Coordinates getCoords();
	};
}

#endif
