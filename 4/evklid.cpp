#include <iostream>

int GCD(int a, int b)
{
    if (a < b)
        return GCD(b, a);
    if (b == 0)
        return a;

    return GCD(b, a % b);
}

int main()

{
    std::cout << GCD(15, 12) << '\n';
}
