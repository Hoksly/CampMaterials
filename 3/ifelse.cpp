#include <iostream>

using namespace std;

void do_some_magic();

int main()
{
    int x, y;
    cin >> x >> y;

    if (x > y)
        cout << "x is larger y" << endl;
    else if (x < y)
        cout << "x is smaller y" << endl;
    else
        cout << "x is equal y" << endl;

    bool cond1, cond2;

    if (cond1)
        if (cond2)
            do_some_magic();

    if (cond1)
    {

        if (cond2)
        {
        }
        else
            do_some_magic();
    }

    if (cond1 && cond2)
        do_some_magic();

    if (cond1 && !cond2)
        do_some_magic();
}
