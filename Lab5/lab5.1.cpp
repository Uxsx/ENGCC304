#include <stdio.h>

int main() {
    char EmpId[11] ; 
    int hrs ;
    float rate, salary ;

    printf("Input the Employees ID(Max. 10 chars): ")  ;
    scanf("%s", EmpId) ;

    printf("Input the working hrs: ") ;
    scanf("%d", &hrs) ;

    printf("Salary amount/hr: ") ;
    scanf("%f", &rate) ;

    salary = hrs * rate;

    printf("- - - - - - - - - - - - - \n") ;
    printf("Employee ID = %s\n", EmpId) ;
    printf("Salary = U$ %.2f\n", salary) ;

    return 0 ;
}
