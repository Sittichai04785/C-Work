#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int main ( ) {
    int secret , guess , score , num1 , num2 , a ;
    bool condition = true ;
    guess = 0 ;
    printf( "Welcome\n" ) ;
    printf( "To the random number game\n" ) ;
    printf( "Do you want to play game ( 1 = Play ,-1 = Exit) : " ) ;
    scanf( "%d" , &a ) ;
    do {
        score = 100 ;
        num1 = 1 ;
        num2 = 100 ;
        srand(time(NULL)) ;
        secret = rand() % 100 + 1 ;
        if ( a == 1 ) {
            printf( "\nGuess Number 1 to 100 : " ) ;
            if ( guess != secret || guess == secret ) {
                while ( guess != secret || guess == secret ) {
                    scanf( "%d" , &guess ) ;
                    if ( guess > secret ) {
                        printf( "\nYour guess = %d is High\n" , guess ) ;
                        if ( num2 >= guess ) {
                           num2 = guess - 1 ;
                        } // end if
                    } else if ( guess < secret ) {
                        printf( "\nYour guess = %d is Low\n" , guess ) ;
                        if ( num1 <= guess ) {
                            num1 = guess + 1 ;
                        } // end if
                    } else {
                        printf( "\nYour guess = %d is Correct\n" , guess ) ;
                        printf("your winner the correct \n" ) ;
                        break ;
                    } // end if else
                    score -= 10 ;
                    printf( "ํYour score = %d\n" , score ) ;
                    printf( "The numbers are between %d - %d\n" , num1 , num2 ) ;
                    if ( score != 0 ) { 
                    } else {
                        printf( "You lost Score remaining = %d\n" , score ) ;
                        printf( "Number correct = %d\n" , secret ) ;
                        break ;
                    } // end if else
                } // end while
            } // end if
        } else if ( a == -1 ) {
            break ;
        } else {
            printf( "Eorror enter 'y'enter 'n'\n" ) ;
            break ;
        } // end if else
        printf( "Do you want to continue playing \n" ) ;
        printf( "1 = Play ,-1 = Exit:\n" ) ;
        scanf( "%d" , &a ) ;
        if ( a == 1 ) {
            condition = true ;
        } // end if
    } while (condition) ;
    printf( "\n" ) ;
    printf( "Game over\n" ) ;
    printf( "Thank you for playing." ) ;
    return 0 ;
} // end function