#include <iostream>
using namespace std;
void Plus(int x,int y)
{
    cout<<x + y;
}
void Minus(int x, int y)
{
    cout << x - y;
}
void Umnozhenie(int x, int y)
{
    cout << x * y;
}
void Delenie(int x, int y)
{
    cout << x / y;
}
void More(int x,int y)
{
    if (x > y)
        cout << x;
    else
        cout << y;

}
void Less(int x, int y)
{
    if (x < y)
        cout << x;
    else
        cout << y;

}
int main()
{
    Plus(6, 5);
    cout << "\n";
    Minus(12, 6);
    cout << "\n";
    Umnozhenie(3, 2);
    cout << "\n";
    Delenie(4, 2);
    cout << "\n";
    More(6, 7);
    cout << "\n";
    Less(9, 15);
}
