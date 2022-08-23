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

    int target;

    cout << "Number to search: ";
    cin >> target;

    bool found = false;

    for (int i = 0; i < size; i++)
    {
        if (mas[i] == target)
        {
            cout << "It has index: " << i << endl;
            found = true;
        }
    }

    if (not found)
        cout << "Not found" << endl;

    return 0;
}