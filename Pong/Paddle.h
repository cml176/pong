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
		Paddle(float x, float y, float w, float h);

		float getLeftX();

		float getRightX();

		float getTopY();

		float getBottomY();
		
		float getY();
		
		float getHeight();

		void moveDown(int d);

		void moveUp(int d);

		pongModel::Coordinates getCoords();

		pongModel::Coordinates getAreaCoords();
	};
}

#endif
