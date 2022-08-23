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

    int mx = -1;

    for (int i = 0; i < size; i++)
    {
        if (mas[i] > mx)
            mx = mas[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << mas[i] << ' ';
    }

    cout << endl
         << "Max: " << mx << endl;
}