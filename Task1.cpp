#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
 {
    srand(time(0));

    int secretNumber = rand() % 100 + 1;

    int guess = 0;

    while (guess != secretNumber) 
    {
        cout << "\nGuess the number (between 1 and 100): ";
        cin >> guess;
    
        if (guess < secretNumber)
            cout << "\nToo low! Try again." << endl;
        else if (guess > secretNumber)
            cout << "\nToo high! Try again." << endl;
        else
            cout << "\nCongratulations! You guessed the correct number: " << secretNumber << endl;
    }
    
    return 0;
}