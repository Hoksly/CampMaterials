#include <iostream>
#include <random>

using namespace std;

int main()
{
    cout << "Size: ";
    int size;

    cin >> size;

    int *mas = new int[size];

    for (int i = 0; i < size; i++)
    {
        mas[i] = rand() % 100;
    }

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += mas[i]; // sum = sum  + mas[i]
    }

    cout << "Sum: " << sum << endl;
}