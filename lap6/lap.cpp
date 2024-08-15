#include<stdio.h>
int main() {
    int a = 0 , j = 0 , i = 0 ;
    printf( "Please enter line :" ) ;
    scanf( "%d" , &a ) ;
        for( i = 0 ; i < a ; i++) {
            for( j = 0 ; j < a ; j++) { 
                if( a %2 == 0 ) {
                   if( j == i ) {
                    printf( "1" ) ;
                   } else {
                    printf( "0" ) ;
                   } //end else
                } else {
                    if( j == a - i - 1 ) {
                        printf( "1" ) ;
                    } else {
                        printf( "0" ) ;
                    } //end else
                } //end else
           } //end for
        printf( "\n" ) ;
    } //end for
    return 0 ;
} //end function