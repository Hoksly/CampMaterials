#include <iostream>
#include <algorithm>

using namespace std;

void print_mas(int *mas, int n, int md = -1)
{
    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << ' ';
        if (md > 0 && i == md)
            cout << '|' << ' ';
    }

    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    int *mas = new int[n];

    for (int i = 0; i < n; ++i)
    {
        mas[i] = i;
    }

    int move, tmp;

    cin >> move;

    // 1 2 3 4 5 6 7 8 9
    // 3 4 5 6 7 8 9 1 2

    /*
        for (int i = 0; i < move / 2; i++)
    {
        tmp = mas[i];
        mas[i] = mas[move - 1 - i];
        mas[move - 1 - i] = tmp;
    }
    print_mas(mas, n);
    // 2 1 3 4 5 6 7 8 9

    for (int i = 0; i < (n - move) / 2; i++)
    {
        tmp = mas[i + move];
        mas[i + move] = mas[n - 1 - i];
        mas[n - 1 - i] = tmp;
    }
    print_mas(mas, n);
    // 2 1 9 8 7 6 5 4 3

    for (int i = 0; i < n / 2; i++)
    {
        tmp = mas[i];
        mas[i] = mas[n - 1 - i];
        mas[n - 1 - i] = tmp;
    }

    print_mas(mas, n);
    */

    // reverse(mas, mas + move);
    // reverse(mas + move, mas + n);
    // reverse(mas, mas + n);

    // 1 2 3 4 5 6
    // 5 6 1 2 3 4

    // 4 3 2 1 6 5

    reverse(mas + n - move, mas + n);
    reverse(mas, mas + n - move);
    reverse(mas, mas + n);

    print_mas(mas, n);
}