#include <iostream>
#include <cstdlib>
#include <limits> // Include for numeric_limits
#include <ios> // Include for streamsize
#include <ctime> // For time()

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator

    int secretNumber = rand() % 10 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Guess the Number Game!\n";
    cout << "Try to guess the number between 1 and 10.\n";

    do {
        // Get user input
        cout << "Enter your guess: ";

        // Input validation
        while (!(cin >> guess)) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard input buffer
            cout << "Invalid input. Please enter a number: ";
        }

        // Check if the guess is correct, too high, or too low
         if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
        } else if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Too high! Try again.\n";
        }

        attempts++;
    } while (guess != secretNumber);

    return 0;
}
