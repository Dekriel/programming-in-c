#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {
    while(1) {
        time_t secondsFromEpoch = time(NULL); 
        srand(secondsFromEpoch);
        int guess;
        int num = rand() % 10;
        while(1) {
            printf("\nLet's play a game!\nPick a number between 1-10: ");
            scanf("%d", &guess);
            if(guess == num) {
                printf("You got me!");
                exit(0);
            }
            else {
                printf("Nope! Try again...");
            }
        } 
    }
}
