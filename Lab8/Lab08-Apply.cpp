#include <stdio.h>

int main() {
    int position ;
    int year ;
    int project ;
    int basesalary = 0 ;
    float bonus = 0.0 ;
    float specialbonus = 0.0 ;

    printf("Position (1 = Junior Programmer, 2 = Mid-Level Programmer, 3 = Senior Programmer): ") ;
    scanf("%d", &position) ;
    printf("Years of Experience: ") ;
    scanf("%d", &year) ;
    printf("Number of Projects Completed this Year: ") ;
    scanf("%d", &project) ;

    switch (position) {
        case 1: basesalary = 20000; break ;                                                                                                                                                                                                                                                                                                                                                                                                                     
        case 2: basesalary = 35000; break ; 
        case 3: basesalary = 50000; break ; 
        default:
            printf("Invalid position.\n") ;
            return 0 ;
    }

    if (year < 1) {
        bonus = 0.0 ;
    } else if (year <= 3) {
        bonus = basesalary * 0.10 ;
    } else if (year <= 5) {
        bonus = basesalary * 0.15 ;
    } else {
        bonus = basesalary * 0.20 ;
    }

    if (project > 5) {
        specialbonus = basesalary * 0.05 ;
    } else {
        specialbonus = 0.0 ;
    }

    float netsalary = basesalary + bonus + specialbonus ;

    printf("Base Salary: %d THB\n", basesalary) ;
    printf("Experience Bonus: %.0f THB\n", bonus) ;
    printf("Special Bonus: %.0f THB\n", specialbonus) ;
    printf("Net Salary: %.0f THB\n", netsalary) ;

    return 0 ;
}
