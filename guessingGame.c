#include <stdio.h>
#include <stdbool.h>
#include <time.h>

//guesscheacker function determines with the user guessed the correct number generated. returns true of guessed, returns false of they didnt
bool guessChecker(int guess, int num){
    if(guess == num){
        printf("You guessed the number!!! \n");
        return true;
    }
    else if(num < guess){
        printf("Your guess was lower than the number. Try again \n");
        return false;
    }
    else if(num > guess){
        printf("Your guess was higher than the number. Try again \n");
        return false;
    }
}


char line;

int main(){
    //variables need for program
    int choice, max = 10, guess, num;
    time_t t;
    int valid;
    bool al = false;
    srand((unsigned) time(&t));

    //random number generator
    guess = (rand() % max) + 1;

    while(true){
        choice = 0;
        //print statments to collect data
        printf("Press 1 to play game \n");
        printf("Press 2 to chnage the max number. \n");
        printf("Press 3 to quit \n");
        scanf("%d", &choice);
       
       
    }
}