#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(){

    printf( "\t\tWelcome to Guess_Genie!\n" );
    printf( "\tWe will Pick an Number Between 1 to 100\n\t\t\"You have to Guess it\"\n" );

    srand( time(0) );
    int random_number = ( rand()%100 ) + 1;
    int no_of_guesses = 0;
    int no_guessed;
    do
    {
        printf( "Guess Any Number Just For Fun:- " );
        scanf( "%d" , &no_guessed );
        if( no_guessed < random_number ){
            printf( "Awwwww! Its Wrong\nHigher number please!!!!\n" );
        }
        else if ( no_guessed > random_number ) {
            printf( "Awwwww! Its Wrong\nlower number please!!!!!!!!\n" );
        } 
        else {
            printf( "Congratulations! You've guessed the number!\n" );
        
        no_of_guesses++;
        }

    } 
    while ( no_guessed != random_number );
    printf( "you guessed the number in %d guesses" , no_of_guesses );
    
    return 0;

}