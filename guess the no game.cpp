#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, guess;

    srand(time(0));
    number = rand() % 20 + 1;

    do {
        cout << "Guess (1-20): ";
        cin >> guess;
    } while (guess != number);

    cout << "You Have Guessed Correct!";

    return 0;
}
