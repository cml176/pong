#ifndef PADDLE_H
#define PADDLE_H

namespace pongModel {
	class Paddle {

	private:
		int x;
		int y;
		int width;
		int height;

	public:
		Paddle(int int_top, int int_left, int int_w, int int_h);

		int getLeftX();

		void getRightX();

		int getTopY();

		int getBottomY();

		void moveDown(int d);

		void moveUp(int d);

		pongModel::Coordinates getCoords();
	};
}

#endif
