#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to generate random number between 1 and 100
int generateRandomNumber() {
    return rand() % 100 + 1;
}

// Function to check if guess is correct
bool isGuessCorrect(int randomNumber, int guess) {
    return randomNumber == guess;
}

int main() {
    // Seed the random number generator
    srand(time(0));

    int randomNumber = generateRandomNumber();
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I've picked a number between 1 and 100. Try to guess it!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (isGuessCorrect(randomNumber, guess)) {
            cout << "Congratulations! You've guessed the number in " << attempts << " attempts." << endl;
        } else if (guess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }

    } while (!isGuessCorrect(randomNumber, guess));

    return 0;
}
