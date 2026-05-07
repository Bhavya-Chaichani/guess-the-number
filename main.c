/*We will write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.
When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number.
Hint: Use loop & use a random number generator.*/




#include <stdio.h>
#include<stdlib.h>
#include <time.h>


int main(){
    int user_n;
    int guesses = 0;
    srand(time(0));
    int n = rand()%100+1;

 printf("Guess the Number bwt 1-100 : \n");

while (1)
{
   
    printf("Enter your guess: ");
    scanf("%d",&user_n);
    guesses++;
    if (user_n < n) {
            printf("Higher number please\n");
        }
        else if (user_n > n) {
            printf("Lower number please\n");
        }
        else {
            printf("Correct! The number was %d\n", n);
            printf("You guessed it in %d attempts\n", guesses);
            break;
    
    


    }

    
}
    
   return 0; 
}
