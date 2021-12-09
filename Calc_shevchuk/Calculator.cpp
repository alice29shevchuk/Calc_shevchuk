#include "Calculator.h"
#include <iostream>
using namespace std;
void Calculator::Plus(int x, int y)
{
	cout << x + y;
}
void Calculator::Minus(int x, int y)
{
	cout << x - y;
}
void Calculator::Umnozhenie(int x, int y)
{
	cout << x * y;
}
void Calculator::Delenie(int x, int y)
{
	if (y == 0)
		cout << "Division by zero...";
	else
	{
		cout << x / y;
	}
}
void Calculator::More(int x, int y)
{
	if (x > y)
		cout << x;
	else
		cout << y;
}
void Calculator::Less(int x, int y)
{
	if (x < y)
		cout << x;
	else
		cout << y;
}
Calculator::Calculator(int x, int y)
{
	this->x = x;
	this->y = y;
}
