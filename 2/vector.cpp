#include <vector>
#include <iostream>

using namespace std;

void do_something();

int main()
{
    vector<int> V;
    vector<int> V_sized(10);
    vector<int> V_sized_init(10, 0);

    V.push_back(1);
    V.push_back(2);
    V.push_back(3);
    V.push_back(4);

    int size = V.size();

    for (int i = 0; i < 5; i++)
    {
        cout << "Hello World";
    }

    bool something_is_true;

    if (something_is_true)
    {
        do_something();
    }
}
