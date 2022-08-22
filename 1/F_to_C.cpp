// write program that will convert temperature in Celsium to Fahrenheit
#include <iostream>

using namespace std;

int main()
{
    int t_cels, t_fah;
    double a = 84.2;
    cout << "Temperature in Celsium: ";
    cin >> t_cels;

    t_fah = (t_cels * 9 / 5) + 32;

    cout << "Temperature in Fahrenheit: " << t_fah << endl;
}
