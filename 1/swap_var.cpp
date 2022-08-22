#include <iostream>

using namespace std;

int main()
{
    int a, b, tmp;
    a = 100;

    b = 500;

    cout << a << ' ' << b << endl;

    tmp = a;
    a = b;

    b = tmp;

    cout << a << ' ' << b << endl;
}