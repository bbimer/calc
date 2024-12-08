#include <iostream>
#include "fraction.h"
using namespace std;

int main() {
	Fraction frc1(1, 2);
	Fraction frc2(1, 3);

	Fraction result1 = frc1 + frc2;
	Fraction result2 = frc1 - frc2;
	Fraction result3 = frc1 * frc2;
	Fraction result4 = frc1 / frc2;

	result1.print();
	result2.print();
	result3.print();
	result4.print();


	return 0;
}