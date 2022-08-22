#include <iostream>
using namespace std;

int main()

{
    int a, b, sum, div, sub, mult;

    a = 100;
    b = 200;

    sum = a + b;
    sub = a - b;

    div = 100 % 13;

    cout << "Sum: " << sum << endl;
    cout << "Sub: " << sub << endl;
    cout << "Div: " << div << endl;

    // equal priority
    int idk = (-20 + (4 * 8)) / 2;

    cout << "Res: " << idk << endl;
}
