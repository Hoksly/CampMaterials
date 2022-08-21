#include <iostream>

int main()
{
    using namespace std;
    string name;
    int age;

    cout << "Hello, what is your name&" << '\n';
    cin >> name;

    cout << "What is your age " << name << '\n';
    cin >> age;

    cout << "I thougth you are " << age + 1 << "years old, you look younger!" << '\n';

    return 0;
}