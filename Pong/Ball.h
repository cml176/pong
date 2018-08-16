#ifndef BALL_H
#define BALL_H
#include "Coordinates.h"

namespace pongModel {
	class Ball {

	private:
		float x;
		float y;
		float xVelocity;
		float yVelocity;
		int speed;

	public:
		Ball(float x, float y, float xVelocity, float yVelocity, int speed);

		float getX();

		float getY();

		float getXVelocity();

		float getYVelocity();

		void setYVelocity(float);

		void setXVelocity(float);

		int getSpeed();

		void move();

		void resetBall();

		void normalizeVelocity();

		pongModel::Coordinates getCoords();
	};
}

#endif
