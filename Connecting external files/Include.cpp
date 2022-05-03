#include <iostream>
#include <cmath>
#include "Mymath.h"
using std::cout;
using std::endl;
using std::cin;
using namespace MySpace;

double MySpace::x = 25;

int main()
{
	cout << MySpace::div(15, 25) << endl;
	cout << sub(15, 25) << endl;
	cout << mult(15, 25) << endl;
	cout << sum(15, 25) << endl;

	cout << MySpace::x << "\n";
}
