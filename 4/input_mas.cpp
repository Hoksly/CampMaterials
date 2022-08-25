#include <iostream>

using namespace std;

int *input_mas(int &n)
{
    cout << "Size: ";
    cin >> n;

    int tmp = 0;

    int *mas = new int[n];

    for (int i = 0; i < n; ++i)
        mas[i] = i;

    return mas;
}

int main()
{
    int n, *mas;

    mas = input_mas(n);

    for (int i = 0; i < n; i++)
        cout << mas[i] << ' ';

    cout << endl;
}