#include "Vector2.hpp"

void Vector2::add(const double _x, const double _y) {
	this->x += _x;
	this->y += _y;
}

void Vector2::operator+(const Vector2 vector) {
	this += vector.x, vector.y;
}

void Vector2::minus(const double _x, const double _y) {
	this->x -= _x;
	this->y -= _y;
}

void Vector2::operator-(Vector2 vector) {
	this->x -= vector.x;
	this->y -= vector.y;
}

void Vector2::operator*(const double _factor) {
	this->x *= _factor;
	this->y *= _factor;
}

void Vector2::operator*(Vector2 vector) {
	this->x *= vector.x;
	this->y *= vector.y;
}

void Vector2::operator/(const double _factor) {
	this->x /= _factor;
	this->y /= _factor;
}

void Vector2::operator/(Vector2 vector) {
	this->x /= vector.x;
	this->y /= vector.y;
}

bool Vector2::operator==(const Vector2 &rhs) const {
	return x == rhs.x && y == rhs.y;
}

bool Vector2::operator!=(const Vector2 &rhs) const {
	return !(rhs == *this);
}
