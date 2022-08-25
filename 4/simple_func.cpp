#include <iostream>

using namespace std;

int sum(int a, int b)
{
    return a + b;
}

void print_array(int *mas, int n)
{
    for (int i = 0; i < n; ++i)
        cout << mas[i] << ' ';
    cout << endl;
}

void add_one(int &a)
{
    a++;
}

void do_nothing()
{
}

long long large_sum(const long long &a, const long long &b)
{
    return a + b;
}

void print_mas(int *mas, int n, string sep = " ", string end_l = "\n")
{
    for (int i = 0; i < n; ++i)
        cout << mas[i] << sep;
    cout << end_l;
}

int main()
{

    int mas[] = {1, 2, 3, 4};
}