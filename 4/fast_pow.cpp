#include <iostream>

using namespace std;

long long fast_pow(int a, unsigned int b)
{
    if (b == 0)
        return 1;

    if (b % 2 == 1)
        return a * fast_pow(a, b - 1);

    return fast_pow(a * a, b / 2);
}
int main()
{
}