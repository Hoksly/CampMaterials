#include <vector>

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Size: ";
    cin >> n;

    vector<int> V;

    V.reserve(n);
    for (int i = 0; i < n; i++)
    {
        V.push_back(i);
    }

    // for el in list

    for (int el : V)
    {
        cout << el << ' ';
    }

    cout << endl;
}