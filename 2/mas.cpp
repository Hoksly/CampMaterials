#include <iostream>
#include <random>

using namespace std;

int main()
{
    int n;
    cout << "Size: ";
    cin >> n;

    int *mas = new int[n];
    cout << mas << endl;

    // 1 2 3 4

    for (int i = 0; i < n; i++)
    {
        mas[i] = rand() % 100;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << mas[i] << endl;
    }

    return 0;
}
