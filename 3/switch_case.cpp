#include <iostream>

using namespace std;

int main()
{
    int weather_condition;
    cin >> weather_condition;

    switch (weather_condition)
    {
    case 0:
        cout << "It is raining now" << endl;
        break;
    case 1:
        cout << "It is snowing now" << endl;
        break;
    case 2:
        cout << "It is sunny now" << endl;
        break;
    case 3:
        cout << "It is cloudy now" << endl;
        break;

    default:
        cout << "Not recognizable weather condition" << endl;
        break;
    }
}