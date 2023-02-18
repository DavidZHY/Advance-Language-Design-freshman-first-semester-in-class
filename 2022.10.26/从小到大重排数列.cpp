#include <stdio.h>

int main () {
	int a [ 10 ] = { 10 , 9 , 8 , 7 , 6 , 5 , 4 , 3 , 2 , 1 };
	int temp = 0;
	for ( int i = 0 ; i < 10 ; i++ ) {
		for ( int j = 0 ; j < 10 - i ; j++ ) {
			if ( a [ j + 1 ] < a [ j ] ) {
				temp = a [ j + 1 ];
				a [ j + 1 ] = a [ j ];
				a [ j ] = temp;
				temp = 0;
			}
		}
	}
	for ( int n = 0 ; n <= 9 ; n++ ) {
		printf ( "%d " , a [ n ] );
	}
	return 0;
}
