#include <iostream>

using namespace std;

void do_some_magic();

int main()
{
    /*
    int i = 0;

    while (i < 20)
    {
        cout << "i now is equal to " << i << endl;
        i++;
    }
    */

    int size = 10;
    int mas[size];

    int i = 0;
    while (i < size) // i < 10
    {
        mas[i] = i;
        cout << "Iteration " << i + 1 << endl;
        i++;
    }
}
