#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	int gameattempt/*max attempt time*/ , attempt/*current attempt time*/;
	int answer/*real answer this round*/ , guess/*guest's guess'*/ , stopgame = 1/*1 = resume*/ , result = 0 /*0 = fail*/;
	int gamingtime = 0/*play time*/ , totalguess = 0/*guess time*/ , successtime = 0/*success time*/;
	char retry;
	while ( stopgame ) {
		gamingtime++;
		result = 0;
		attempt = 0;
		printf ("Your max attempt chance: ");
		scanf ("%d" , &gameattempt);//max attempt times
		srand ( time (0) );
		int rand();
		answer = rand() % 101;//set random answer
		while ( attempt < gameattempt ) {
			attempt++;
			totalguess++;//count
			printf ("Enter your guess(0-100): ");
			scanf ("%d" , &guess);//get guess
			if ( guess > answer ) {//judge guess
				printf ("Too big.\n");
			} else if ( guess < answer ) {
				printf ("Too small.\n");
			} else if ( guess == answer ) {
				printf ("Bingo you get it!\n");
				printf ("You have tried %d/%d time(s).\n" , attempt , gameattempt);
				result = 1;
				successtime++;
				break;
			}
		}
		if ( result ) {
			
		} else {
			printf ("You have used up your chances. ");
		}
		printf ("Game over.\n");
		printf ("Do you want to start again?(Y/N): ");
		fflush (stdin);
		scanf ("%c" , &retry);
		while ( retry != 'Y' && retry != 'N' ) {
			printf ("You have entered letter incorrectly, enter again: ");
			fflush(stdin);
			scanf ("%c" , &retry);
		}
		if( retry == 'Y' ) {
			
		} else {
			stopgame = 0;
			printf ("Game over. Your success rate is: %d/%d" , successtime , totalguess);
		}
	}
	return 0;
}
