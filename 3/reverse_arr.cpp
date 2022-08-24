#include <iostream>

using namespace std;

int main()
{

    // 1 2 3 4 5
    // 5 4 3 2 1

    int n;
    cout << "Size: ";
    cin >> n;
    int *mas = new int[n];

    for (int i = 0; i < n; i++)
    {
        mas[i] = i;
    }

    int tmp, tab;

    cout << "Tab: ";
    cin >> tab;

    for (int i = 0; i < (n - tab) / 2; i++)
    {
        tmp = mas[i + tab];
        mas[i + tab] = mas[n - i - 1];

        mas[n - i - 1] = tmp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << ' ';
    }

    cout << endl;
}