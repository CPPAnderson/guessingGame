#include <stdio.h>
#include <stdbool.h>
#include <time.h>



int main(){
    //variables need for program
    int choice, max = 10, guess, num;
    time_t t;
    int valid;
    bool al = false;
    srand((unsigned) time(&t));

    //random number generator
    guess = (rand() % max) + 1;
}