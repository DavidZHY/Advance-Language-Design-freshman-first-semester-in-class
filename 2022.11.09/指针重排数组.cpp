#include <stdio.h>

void sortbubble ( int* a , int n );

void sortbubble ( int* a , int n ) {
	int temp = 0;
	for ( int i = 0 ; i < n ; i++ ) {
		for ( int j = 0 ; j < 10 - i - 1 ; j++ ) {
			if ( *( a + j + 1 ) < *( a + j ) ) {
				temp = *( a + j + 1 );
				*( a + j + 1 ) = *( a + j );
				*( a + j ) = temp;
				temp = 0;
			}
		}
	} 
}

int main () {
	int a [ 10 ] = { 10 , 9 , 8 , 7 , 6 , 5 , 4 , 3 , 2 , 1 };
	sortbubble ( a , 10 );
	for ( int n = 0 ; n < 10 ; n++ ) {
		printf ( "%d " , a [ n ] );
	}
	return 0;
}
