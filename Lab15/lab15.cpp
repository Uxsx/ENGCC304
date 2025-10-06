#include <stdio.h>
#include <string.h>

int countWords(FILE *fp) {
    int count = 0 ;
    char word[100] ;

    while (fscanf(fp, "%99s", word) == 1) {
        count++ ;
    }

    return count ;
}

int main() {
    char filename[50] ;
    FILE *fp ;

    printf("Enter file name:\n") ;
    scanf("%s", filename) ;

    fp = fopen(filename, "r") ; 
    if (fp == NULL) {
        printf("Cannot open file '%s'\n", filename) ;
        return 1 ;
    }

    int totalWords = countWords(fp) ;   

    printf("Total number of words in '%s' : %d words\n", filename, totalWords) ;

    fclose(fp) ;
    return 0 ;
}
