// Guessing Game
// A simple game where the program selects a random number and
// the player tries to guess it

#include <iostream>
#include <string>

using namespace std;

int main(){
  srand(time(NULL));
  int iNum = rand() % 100 + 1;
  int iGuess = 0;
  

  do {
    std::cout << "Guess a number between 1 and 100: " << std::endl; 
    cin >> iGuess;
    
   // if they guess to high
    if (iGuess > iNum){
      std::cout << "You guess too high" << std::endl;
    }
    // if guess is too low
    else if (iGuess < iNum) { 
      std::cout << "You guess too low" << std::endl;
    }
  } while (iNum != iGuess);
} 
