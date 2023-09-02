#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int lower = 1;      // Lower bound of the range
    int upper = 100;    // Upper bound of the range
    int target;         // Randomly generated target number
    int guess;          // User's guess
    int attempts = 0;   // Number of attempts

    // Initialize random number generator
    srand(time(0));

    // Generate a random number within the specified range
    target = lower + rand() % (upper - lower + 1);

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between " << lower << " and " << upper << ". Try to guess it." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == target) {
            cout << "Congratulations! You guessed the correct number (" << target << ") in " << attempts << " attempts." << endl;
            break;
        } else if (guess < target) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }

    } while (true);

    return 0;
}
