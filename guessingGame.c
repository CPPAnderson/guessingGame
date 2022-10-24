#include <stdio.h>
#include <stdbool.h>
#include <time.h>



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