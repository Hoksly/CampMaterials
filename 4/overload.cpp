#include <iostream>
using namespace std;

void print(int a)
{
    cout << a << endl;
}

void print(string s)
{
    cout << s << endl;
}

void print(int *mas, int n)
{
    for (int i = 0; i < n; i++, mas++)
        cout << *mas << ' ';

    cout << endl;
}

int main()
{
}