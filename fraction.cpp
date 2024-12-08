#include <iostream>
#include "fraction.h"
using namespace std;

Fraction::Fraction(int x, int y) {
	this->x = x;
	this->y = y;
}

Fraction Fraction::operator+(const Fraction& other) const {
	int X = this->x * other.y + other.x * this->y;
	int Y = this->y * other.y;
	return Fraction(X, Y);
}
Fraction Fraction::operator-(const Fraction& other) const {
	int X = this->x * other.y - other.x * this->y;
	int Y = this->y * other.y;
	return Fraction(X, Y);
}
Fraction Fraction::operator*(const Fraction& other) const {
	int X = this->x * other.x;
	int Y = this->y * other.y;
	return Fraction(X, Y);
}
Fraction Fraction::operator/(const Fraction& other) const {
	int X = this->x * other.y;
	int Y = this->y * other.x;
	return Fraction(X, Y);
}

void Fraction::print() const {
	cout << x << "/" << y << endl;
}

