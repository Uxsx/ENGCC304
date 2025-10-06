#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choice ;
    int guess ;
    int answer ;
    int score ;

    srand(time(NULL)) ; 

    while (1) {
        printf("Do you want to play game (1=play,-1=exit) : ") ;
        if (scanf("%d", &choice) != 1) {
            printf("Please enter only 1 or -1.\n\n") ;
            while (getchar() != '\n') ;
            continue ;
        }

        if (choice == -1) {
            printf("\nSee you again.\n") ;
            break ;
        } else if (choice != 1) {
            printf("Please enter only 1 or -1.\n\n") ;
            continue ;
        }

        // Restart
        answer = rand() % 100 + 1 ;
        score = 100 ;

        printf("\n(Score=%d)\n", score) ;

        int low = 1, high = 100 ; 

        while (1) {
            printf("\nGuess the winning number (%d-%d) : ", low, high) ;
            scanf("%d", &guess) ;

            if (guess == answer) {
                printf("\nThat is correct! The winning number is %d.\n", answer) ;
                printf("\nScore this game: %d\n\n", score) ;
                break ;
            } else {
                score -= 10 ;
                if (score <= 0) {
                    printf("\nYou lose! The winning number was %d.\n", answer) ;
                    printf("Score this game: 0\n\n") ;
                    break ;
                }

                if (guess < answer) {
                    printf("\nSorry, the winning number is HIGHER than %d. (Score=%d)\n", guess, score) ;
                    if (guess + 1 > low) low = guess + 1 ;
                } else {
                    printf("\nSorry, the winning number is LOWER than %d. (Score=%d)\n", guess, score) ;
                    if (guess - 1 < high) high = guess - 1 ;
                }
            }
        }
    }

    return 0 ;
}
