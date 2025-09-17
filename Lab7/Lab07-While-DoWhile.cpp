#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int select;
    srand(time(NULL));   
    do {
        printf("Do you want to play game (1=play,-1=exit) :\n");
        scanf("%d", &select);

        if (select == 1) {
            int number = rand() % 100 + 1;  
            int guess, score = 100;
            int low = 1, high = 100;       

            printf("\n(Score=%d)\n\n", score);

            while (1) {
                printf("Guess the winning number (%d-%d) :\n", low, high);
                scanf("%d", &guess);

                if (guess == number) {
                    printf("\nThat is correct! The winning number is %d.\n", number);
                    printf("\nScore this game: %d\n\n", score);
                    break;
                } else {
                    score -= 10; 

                    if (guess < number) {
                        printf("\nSorry, the winning number is HIGHER than %d. (Score=%d)\n\n", guess, score);
                        if (guess + 1 > low) low = guess + 1;
                    } else {
                        printf("\nSorry, the winning number is LOWER than %d. (Score=%d)\n\n", guess, score);
                        if (guess - 1 < high) high = guess - 1;
                    }
                }
            }
        } else if (select == -1) {
            printf("\nSee you again.\n");
        }

    } while (select != -1);

    return 0;
}
