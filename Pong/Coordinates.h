#ifndef COORDINATES_H
#define COORDINATES_H

namespace pongModel {
	class Coordinates {

	private:
		int x;
		int y;

	public:
		Coordinates(float x, float y);

		pongModel::Coordinates Coordinates::operator<(Complex &);

		pongModel::Coordinates Coordinates::operator>(Complex &);

		float getX();

		float getY();
	};
}

#endif
