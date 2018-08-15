#ifndef COORDINATES_H
#define COORDINATES_H

namespace pongModel {
	class Coordinates {

	private:
		int x;
		int y;

	public:
		Coordinates(int int_x, int int_y);
		
		pongModel::Coordinates getCoordinates();
	};
}

#endif
