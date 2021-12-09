#include <iostream>
using namespace std;
#include "Calculator.h"
int main()
{
	Calculator calc(4,8);
	calc.Plus(5, 2);
	cout << "\n";
	calc.Minus(10, 2);
	cout << "\n";
	calc.Umnozhenie(2, 3);
	cout << "\n";
	calc.Delenie(4, 0);
	cout << "\n";
	calc.More(5, 9);
	cout << "\n";
	calc.Less(2, 7);
}
