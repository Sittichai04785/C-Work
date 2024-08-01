#include <stdio.h>
int main () {
    char Employees_ID[10] ;
    int working ;
    int salary ;
    printf( "Input the Employees ID(Max. 10 chars):" ) ;
    scanf( "%s", Employees_ID ) ;
    printf( "Input the working hrs:" ) ;
    scanf( "%d" , &working ) ;
    printf( "Salary amount/hr:" ) ;
    scanf( "%d" , &salary ) ;

    printf( "\n" ) ;
    printf( "Employees ID = %s" , Employees_ID ) ;
    printf( "\nSalary = U$ %d" , working * 30 * salary ) ;
    printf( "\n\n" ) ;
    return 0 ;
}//end main function