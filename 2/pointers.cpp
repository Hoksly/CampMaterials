#include <iostream>

using namespace std;

int main()
{
    int value = 100;

    int *pointer = &value;

    int actual_value_copy = *pointer;

    cout << pointer << endl; // 0x7fffffffd76c
}
