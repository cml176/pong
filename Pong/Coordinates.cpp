#include "Coordinates.h"

pongModel::Coordinates::Coordinates(float x, float y) {
	// TODO - implement Coordinates::Coordinates
	this->x = x;
	this->y = y;
}

pongModel::Coordinates Coordinates::operator>(Complex &other)
{
	if (x > other.getX() && y > other.getY())
		return true;
	else
		return false;
}

float pongModel::Coordinates::getX()
{
	return pongModel::this->x;
}

float pongModel::Coordinates::getY()
{
	return pongModel::this->y;
}

pongModel::Coordinates Coordinates::operator<(Complex &other)
{
	if (x < other.getX() && y < other.getY())
		return true;
	else
		return false;
}
