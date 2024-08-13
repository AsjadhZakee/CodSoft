#include <iostream>
#include <cstdlib> // for rand num generation
#include <ctime>     // for seeding the rand num generator
using namespace std;

int main() {
    std::srand(std::time(nullptr));  // Seed the random number generator

    int randomno = std::rand() % 100 + 1;  // Random number between 1 and 100
    int guess = 0;
    int max = 3;  // Maximum number of guesses allowed
    int count = 0;   // Counter for the number of guesses

    cout << "\t ***** Number Guessing Game ***** \t" << endl;
    cout<<"  " <<endl;
    cout<<" \t  Welcome! \t"<<endl;
    cout<<"  "<<endl;
    cout<<"Instructions:"<<endl;
    cout<<"You have to guess a number between 1 and 100"<<endl;
    cout<<"You have maximum of "<<max<<"attempts"<<endl;
    cout<<"You will be a winner if you guess the correct number within maximum "<<max<<"attempts"<<endl;
  

    while (guess != randomno && count < max) {
        cout << "Guess a number: "<<endl;
        cin >> guess;
        count++;

        if (guess < randomno) {
            cout << "Too low! Try again." << endl;
        } else if (guess > randomno) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed correctly." << endl;
            return 0;  
        }

        cout << "You have " << (max - count) << " more attempts left." << endl;
    }

    if (count >= max) {
        cout << "Sorry, you have exceeded the maximum attempts."<<endl;
        cout<<"Correct number:"<< randomno<< endl;
    }

    return 0;
}
