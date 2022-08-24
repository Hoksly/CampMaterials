#include <iostream>
#include <random>

using namespace std;

// Initialize array with random numbers and then print it to console

void do_some_magic();

int main()
{
    int size = 10;
    int mas[10]; // we must not use size varriable here, it may broke program on some computers

    for (int i = 0; i < size; ++i)
        mas[i] = rand() % 100;

    for (int i = 0; i < size; ++i)
        cout << mas[i] << ' ';

    cout << endl;

    // number guesser with for loop

    int random_number = rand() % 20, input;
    for (;;) // infinite loop
    {
        cout << "Your number: ";
        cin >> input;

        if (random_number == input) // condition that was in while loop
            break;                  // exiting the loop
    }

    for (int i = 0; i < 10; i++)
    {
        do_some_magic();
    }
}
