#ifndef COORDINATES_H
#define COORDINATES_H


namespace pongModel {
	class Coordinates {

	private:
		int x;
		int y;

	public:
		Coordinates(float x, float y);

		bool operator <(Coordinates &) const;

		bool operator >(Coordinates &) const;

		float getX();

		float getY();
	};
}

#endif
