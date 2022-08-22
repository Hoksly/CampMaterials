#include <iostream>

int main()
{
    using namespace std;

    string name;
    int age;

    cout << "What is your name?" << '\n';

    cin >> name;

    cout << "Hello " << name << ". How old are you?" << '\n';

    cin >> age;

    cout << "I thought you are " << age + 1 << " years old, you look younger!" << '\n';
}
