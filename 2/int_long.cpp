#include <iostream>

using namespace std;
int main()
{
    int a = 1000000000000000000;
    long b = 999999999999999999;

    cout << a << endl;
    cout << b << endl;

    a = b;

    cout << a << ' ' << b << endl;
}
