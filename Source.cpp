#include <iostream>
#include <cmath>
using namespace std;

double function(double x)
{
    return pow(x, 3) - 10 * x + 2;
}

double find(double a, double b, double e)
{
    while (fabs(b - a) > e)
    {
        a = b - (b - a) * function(b) / (function(b) - function(a));
        b = a - (a - b) * function(a) / (function(a) - function(b));
    }
    return b;
}

int main()
{
    setlocale(LC_ALL, "Ukr");
    double a = -4, b = -3, e = 0.0002;
    cout << "Корінь: " << find(a, b, e) << endl;
    return 0;
}