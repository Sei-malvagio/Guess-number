#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int guessNumber(int guessNum);

int main() {
    int guessNum;
    guessNumber(guessNum);
    return 0;
}

int guessNumber(int guessNum) {
    for(int i = 0; i < 3; i++) printf("\033[0;92m\033[1m=");
    printf("\n\n\033[0;94m\033[1m Guess the number between 1-100 \033[0;97m");
    for(int i = 0; i < 3; i++) printf("\033[0;92m\033[1m=\033[0;97m");
    while(1) {
        srand(time(NULL));
        int randomNum = rand() % 100 + 1;
        printf("\nGuess the number: ");
        scanf("%i", &guessNum);
        if(guessNum >= randomNum) {
            if(randomNum == guessNum) {
                printf("\033[0;32mGood you guessed it %i!\033[0;37m", randomNum);
            } else {
                printf("\n\033[0;92mNo. of Guesses: %i", randomNum);
                printf("\n\033[0;91mGuessed numbers are: %i\033[0;97m", guessNum);
                printf("\n\033[0;31mToo high, Try again!\033[0;97m");
            }
        } else {
            printf("\n\033[0;92mNo. of Guesses: %i", randomNum);
            printf("\n\033[0;91mGuessed numbers are: %i\033[0;97m", guessNum);
        }
    }
}
