#include <stdio.h>
#include <string.h>

#define N 10

struct score {
	char name [ 10 ];
	int score;
} student [ N ];

void scoreavg ( struct score student [ ] , int n ) {
	float score = 0.0;
	int num = 0;
	for ( int i = 0 ; i < n ; i++ ) {
		score += student [ i ] . score;
		if ( student [ i ] . score >= 60 ) {
			num++;
		}
	}
	score /= n;
	printf ( "Average score is %f.\nNumber of people is: %d.\n" , score , num );
}

int main () {
	int number = 0;
	int temp;
	for ( int i = 0 ; i < N ; i++ ) {
		if ( scanf ( "%s\t%d" , student [ i ] . name , &student [ i ] . score ) != EOF ) {
			number++;
		} else {
			break;
		}
	}
	scoreavg ( student , number );
	printf ("Not sorted:\n");
	for ( int i = 0 ; i < number ; i++ ) {
		printf ( "%s\t%d\n" , student [ i ] . name , student [ i ] . score );
	}
	printf ("Sorted by name:\n");
	for ( int i = 0 ; i < number ; i++ ) {
		for ( int j = 0 ; j < number - j - 1 ; j++ ) {
			if ( strcmp ( student [ j ] . name , student [ j + 1 ] . name ) > 0 ) {
				for ( int k = 0 ; k < 10 ; k++ ) {
					temp = student [ j ] . name [ k ];
					student [ j ] . name [ k ] = student [ j + 1 ] . name [ k ];
					student [ j + 1 ] . name [ k ] = temp;
				}
				temp = student [ j ] . score;
				student [ j ] . score = student [ j + 1 ] . score;
				student [ j + 1 ] . score = temp;
			}
		}
	}//end sorting
	for ( int i = 0 ; i < number ; i++ ) {
		printf ( "%s\t%d\n" , student [ i ] . name , student [ i ] . score );
	}
	printf ("Sorted by name:\n");
	for ( int i = 0 ; i < number ; i++ ) {
		for ( int j = 0 ; j < number - i - 1 ; j++ ) {
			if ( student [ j ] . score < student [ j + 1 ] . score ) {
				for ( int k = 0 ; k < 10 ; k++ ) {
					temp = student [ j ] . name [ k ];
					student [ j ] . name [ k ] = student [ j + 1 ] . name [ k ];
					student [ j + 1 ] . name [ k ] = temp;
				}
				temp = student [ j ] . score;
				student [ j ] . score = student [ j + 1 ] . score;
				student [ j + 1 ] . score = temp;
			}
		}
	}//end sorting
	for ( int i = 0 ; i < number ; i++ ) {
		printf ( "%s\t%d\n" , student [ i ] . name , student [ i ] . score );
	}
	return 0;
}
