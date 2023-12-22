#include <iostream>
#include <cstdlib> // For rand() and srand()

using namespace std;

int main() {
    // Generate a random number between 1 and 10
    int secretNumber = rand() % 10 + 1;

    // Variables to store user input and count attempts
    int guess;
    int attempts = 0;

    cout << "Welcome to the Guess the Number Game!\n";
    cout << "Try to guess the number between 1 and 10.\n";

    do {
        // Get user input
        cout << "Enter your guess: ";
        cin >> guess;

        // Check if the guess is correct, too high, or too low
        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
        } else if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Too high! Try again.\n";
        }

        // Increment the attempts counter
        attempts++;

    } while (guess != secretNumber);

    return 0;
}
