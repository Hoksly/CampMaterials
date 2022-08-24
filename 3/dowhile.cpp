#include <iostream>
#include <random>

using namespace std;
void do_some_magic();

int main()

{
    int random_number, user_input;
    bool condition;

    do
    {
        do_some_magic();

    } while (condition);

    random_number = rand() % 20;

    do
    {
        cout << "Your number: ";
        cin >> user_input;

    } while (user_input != random_number);
    cout << "You are right! It is " << random_number << endl;
}
