// Task 1:
// Number guessing game:

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // add the random number generator
    srand(time(0));

    // add variable to store values
    int numberToGuess;
    int userGuess;
    int maximumGuesses, maximumToGuess;
    bool won = false;
    int keepGoing = 0;

    do
    {
        cout << "What is the maximum number to guess: ";
        cin >> maximumToGuess;
        cout << "How many opportunities you want: ";
        cin >> maximumGuesses;

        numberToGuess = rand() % maximumToGuess + 1;
        // cout << "- - - - " << numberToGuess << " - - - -" << endl  << endl;

        for (int i = 0; i < maximumGuesses; i++)
        {
            int guess;
            cout << "Enter Your guess (between 1 and 10): " << endl;
            cin >> guess;

            // check if the guess is too high or too low
            if (guess > numberToGuess)
            {
                cout << "Oops Sorry!! Try a smaller value. " << endl;
            }
            else if (guess < numberToGuess)
            {
                cout << "Oops Sorry!! Try a larger value. " << endl;
            }
            else
            {
                won = true;
                break;
            }
        }

        if (won)
        {
            cout << "You are a Winner!!!" << endl;
        }
        else
        {
            cout << "Sorry! You lose." << endl;
        }
        cout << "Would you like to play another game? [1 for yes]: ";
        cin >> keepGoing;

    } while (keepGoing == 1);

    cout << "Thanks for playing my game" << endl;

    return 0;
}