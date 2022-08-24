#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> V = {1, 2, 3, 54, 1, 2, 5, 8, 9};

    for (auto iterator = V.begin(); iterator != V.end(); iterator++)
    {
        cout << *iterator << ' ';
    }
    cout << endl;
}
