#include <cmath>

double S(double, double);
double S(double R, bool is_3D = false);

int main()
{
}

double S(double R, bool is_3D = false)
{
    if (is_3D)
        return M_PI * R * R * 4;

    return M_PI * R * R;
}

double S(double a, double b)
{
    return a * b;
}
