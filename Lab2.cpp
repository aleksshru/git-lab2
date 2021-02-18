#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;
bool isInArea(double x, double y)
{
    if (x <= 1 && x >= 0 && y <= 1 && y >= -1 || x * x + y * y <= 1)
        return 1;
    else return 0;
}
double f(double x)
{
        return x <= 3 ? x * x - 3 * x + 9 : 1 / (x * x * x + 6);
}
int main()
{
    double x, y;
    int num;
    double f(double x);
    bool isInArea(double x, double y);
    cout << "1. Zadanie 1" << endl;
    cout << "2. Zadanie 2" << endl;
eror:
    cout << "Vibirete zadanie" << endl;
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "x= ";
        cin >> x;
        cout << "y= ";
        cin >> y;
        cout << isInArea(x, y) << endl;
        break;
    case 2:
        cout << "x= ";
        cin >> x;
        cout << f(x);
        break;
    default:
        goto eror;
        break;
    }
}
