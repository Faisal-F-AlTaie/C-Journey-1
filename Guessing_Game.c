#include <stdio.h>
#include <stdlib.h>

int main () {
   int secretNumber = 5;
   int guess;
   int guessCount = 0;
   int guessLimit = 3;
   int outOfGuesses = 0;

   while(guess != secretNumber && outOfGuesses == 0){
        if(guessCount < guessLimit){
            printf("Enter a Number: ");
            scanf("%d", &guess);
            guessCount++;
        } else {

            outOfGuesses = 1; //This is a boolean variable as its stored between 0 and 1
        }

   }

   if(outOfGuesses == 1){
        printf("Out of guesses");
   } else {
        printf("Great Guess, You Win!");
   }

    return 0; 
}