#include "../model_headers/Coordinates.h"

pongModel::Coordinates::Coordinates(float x, float y) {
	// TODO - implement Coordinates::Coordinates
	this->x = x;
	this->y = y;
}

bool pongModel::Coordinates::operator >(Coordinates &other) const
{
	if (x > other.getX() && y > other.getY())
		return true;
	else
		return false;
}

float pongModel::Coordinates::getX()
{
	return this->x;
}

float pongModel::Coordinates::getY()
{
	return this->y;
}

bool pongModel::Coordinates::operator <(Coordinates &other) const
{
	if (x < other.getX() && y < other.getY())
		return true;
	else
		return false;
}
