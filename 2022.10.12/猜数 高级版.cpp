#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	int gameattempt , attempt = 0 , answer , guess;
	printf ("Your max attempt chance: ");
	scanf ("%d" , &gameattempt);
	srand ( time (0) );
	int rand();
	answer = rand() % 101;
	while ( attempt < gameattempt ) {
		attempt++;//¼ÆÊý 
		printf ("Enter your guess(0-100): ");
		scanf ("%d" , &guess);
		if ( guess < 0 || guess > 100 ) {
			printf ("Out of range!\n");
		} else {
			if ( guess > answer ) { 
				printf ("Too big.\n");
			} else if ( guess < answer ) {
				printf ("Too small.\n");
			} else if ( guess == answer ) {
				printf ("Bingo you get it!\n");
				printf ("You have tried %d/%d time(s)." , attempt , gameattempt);
				return 0;
			}
		}
	}
	printf ("You have used up your chance. Game over.");
	return 0;
}
