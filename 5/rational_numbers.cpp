#include <algorithm>
#include <cmath>
#include <string>
#include <iostream>
using namespace std;

struct number
{
    bool pos = true; // знак
    int num = 0;     // чисельник
    int den = 0;     // знаменик

    number(int a, int b) : num(a), den(b) {}
};

int GCD(int, int);
inline int HCF(int, int);
void simplify(number &);
void swap(number &);
void print(const number &);
int my_abs(int);

number add(number, number);
number sub(number, number);
number div(number, number);
inline number mult(const number &, const number &);

number input();
int main()
{

    number a(8, 3);
    number b(2, 3);

    b.pos = false;
    print(div(a, b));
    return 0;
}

number input()
{
    int a, b;
    cin >> a >> b;

    c = number(my_abs(a), b);
    c.pos = (a > 0) ? true : false;
    return c;
}

int GCD(int a, int b)
{
    if (a < b)
        return GCD(b, a);
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

inline int HCF(int a, int b)
{
    return a * b / GCD(a, b);
}

void simplify(number &a)
{
    int gcd = GCD(a.num, a.den);
    a.num /= gcd;
    a.den /= gcd;
}

void swap(number &a)
{
    int tmp = a.num;
    a.num = a.den;
    a.den = tmp;
}

void print(const number &a)
{
    string num, den;
    num = to_string(a.num);
    den = to_string(a.den);

    int l = max(num.size(), den.size()) + 2, shift_n, shift_d;

    shift_n = (l - num.size()) / 2;
    shift_d = (l - den.size()) / 2;

    for (int i = 0; i < shift_n; i++)
        cout << ' ';

    // if a is negative
    if (!a.pos)
        cout << '-';

    cout << num << endl;

    for (int i = 0; i < l; i++)
        cout << '-';
    cout << endl;

    for (int i = 0; i < shift_d; i++)
        cout << ' ';
    cout << den << endl;
}

// 82
//----
// 3
int my_abs(int a)
{
    return (a > 0) ? a : -a;
}

number add(number a, number b)
{
    if (a.pos && b.pos)
    {
        cout << "HERE1" << endl;
        number c(a.num * b.den + b.num * a.den, a.den * b.den);
        simplify(c);
        return c;
    }
    if (a.pos)
    {
        cout << "HERE2" << endl;
        b.pos = true;
        return sub(a, b);
    }
    if (b.pos)
    {
        cout << "HERE3" << endl;
        a.pos = true;
        return sub(b, a);
    }

    number c(a.num * b.den + b.num * a.den, a.den * b.den);
    c.pos = false;
    return c;
}

number sub(number a, number b)
{
    if (a.pos && b.pos)
    {

        number c(my_abs(a.num * b.den - b.num * a.den), a.den * b.den);
        if (a.num * b.den - b.num * a.den < 0)
            c.pos = false;
        simplify(c);
        return c;
    }
    if (a.pos)
    {
        b.pos = true;
        return add(a, b);
    }
    if (b.pos)
    {

        a.pos = true;
        number c = add(a, b);
        c.pos = false;
        return c;
    }
    // (-a) - (-b) -> (-a) + (+b) -> (+b) - (+a)
    a.pos = true;
    b.pos = true;
    return sub(b, a);
}

number mult(const number &a, const number &b)
{
    number c(a.num * b.num, a.den * b.den);
    c.pos = (a.pos != b.pos) ? false : true;
    simplify(c);
    return c;
}
// xor
// 0 1 -> 1
// 1 1 -> 0
// 0 0 -> 0
// 1 0 -> 1

number div(number a, number b)
{
    swap(b);
    return mult(a, b);
}
