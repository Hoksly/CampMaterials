#include <iostream>
using namespace std;

int main()
{
    int *mas = new int[3];

    mas[0] = 1;
    mas[1] = 2;
    mas[2] = 3;

    cout << *mas << endl;
    mas++;
    cout << *mas << endl;
}