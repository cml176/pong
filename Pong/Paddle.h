#ifndef PADDLE_H
#define PADDLE_H

namespace pongModel {
	class Paddle {

	private:
		float x;
		float y;
		float width;
		float height;

	public:
		Paddle(float int_top, float int_left, float int_w, float int_h);

		float getLeftX();

		float getRightX();

		float getTopY();

		float getBottomY();

		void moveDown(int d);

		void moveUp(int d);

		pongModel::Coordinates getCoords();

		pongModel::Coordinates getAreaCoords();
	};
}

#endif
