#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    int guess, attempts = 0;
    do {
        cout << "Guess the number (between 1 and 100): ";
        cin >> guess;
        if (guess > randomNumber) {
            cout << "Too high! Try again.\n";
        } else if (guess < randomNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the number in " << attempts + 1 << " attempts.\n";
        }
        attempts++;
    } while (guess != randomNumber);
    return 0;
}