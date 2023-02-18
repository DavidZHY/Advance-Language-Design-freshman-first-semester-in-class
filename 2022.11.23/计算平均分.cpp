#include <stdio.h>

#define STUDENT 3
#define CLASS 4

float average ( int a [ ] );

float average ( int a [ ] ) {
	float sum = 0;
	for ( int i = 0 ; i < CLASS ; i++ ) {
		sum += a [ i ];
	}
	sum /= CLASS;
	return sum;
}

int main () {
	int score [ STUDENT ] [ CLASS ] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 };
	/*for ( int i = 0 ; i < STUDENT ; i++ ) {
		for ( int j = 0 ; j < CLASS ; j++ ) {
			scanf ( "%d" , &score [ i ] [ j ] );
		}
		scanf ("\n");
	}*/
	for ( int i = 0 ; i < STUDENT ; i++ ) {
		printf ( "Average score of student %d is: %f\n" , i + 1 , average ( score [ i ] ) );
	}
	return 0;
} 
