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

// maxChecker makes sure user inputs a valid ranger number for max 
int maxChecker(int max){
    if (max < 1){
        printf("You have entered a number below 1. Please enter a max value between 1 - 2,147,483,647. Do not enter anything below or above that range. \n");
        scanf("%d", max);
        maxChecker(max);
    }
    else if (max > 2147483647){
        printf("You have entered a number above 2,147,483,647. Please enter a max value between 1 - 2,147,483,647. Do not enter anything below or above that range. \n");
        scanf("%d", max);
        maxChecker(max);
    }
    else{
        return max;
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
        
        //switch statement depending on what they chose
        switch(choice){
            case(1):
                //case 1 to play game
                while(!al){
                    scanf("%c", line);
                    printf("guess the number between 1 - %d : ", max);
                    valid = scanf("%d", &num);
                    printf("\n");
                    if (valid == 0){
                        char k;
                        scanf("%c", k);
                        if (k == 'q')
                            al = true;
                    }
                    else{
                        if (guessChecker(guess, num) == true){
                            return 0;
                        }
                    }
                }
                break;
            case(2):
            //case 2 to set a new max
                printf("Enter a max value between 1 - 2,147,483,647. Do not enter anything below or above that range.\n");
                scanf("%d", &max);
                max = maxChecker(max);
                break;
            case(3):
            // case 3 to exit program
                return 0;
        }   

    }
}