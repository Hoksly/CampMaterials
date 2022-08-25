#include <iostream>
#include <cmath>

void solve(double &r1, double &r2, double a, double b = 0, double c = 0)
{
    double D = b * b - 4 * a * c;
    if (D >= 0)
    {
        r1 = (-b + sqrt(D)) / (2 * a);
        r2 = (-b - sqrt(D)) / (2 * a);
    }
    if (D < 0)
    {
        r1 = r2 = -1;
    }
}

// ax^2 + bx + c

int main()
{
    double r1, r2;
    solve(r1, r2, 1, 5, -3);

    std::cout << r1 << ' ' << r2 << std::endl;

    return 0;
}