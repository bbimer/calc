#pragma once

class Fraction
{
private:
	int x, y;

public:
	Fraction(int x, int y);

	Fraction operator+(const Fraction& other) const;
	Fraction operator-(const Fraction& other) const;
	Fraction operator*(const Fraction& other) const;
	Fraction operator/(const Fraction& other) const;


	void print() const;
};
