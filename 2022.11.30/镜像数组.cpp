#include <stdio.h>
#include <stdlib.h>

void trans ( int a [ ] , int** b , int n , int j ) {
	for ( int k = 0 ; k < n ; k++ ) {
		*( *( b + k ) + j ) = *( a + k );
	}
}

int main () {
	int x , y;
	int a [ 100 ] [ 100 ] = { 0 };
	scanf ( "%d%d" , &x , &y );
	int* m = ( int* ) malloc ( ( x + 1 ) * ( y + 1 ) * sizeof ( int ) );
	int** b = ( int** ) malloc ( ( x + 1 ) * sizeof ( int* ) );
	for ( int i = 0 ; i < y ; i++ ) {
		*( b + i ) = m;
		m += y;
	}
	for ( int i = 0 ; i < y ; i++ ) {
		for ( int j = 0 ; j < x ; j++ ) {
			scanf ( "%d" , &a [ i ] [ j ] );
		}
	}
	for ( int i = 0 ; i < y ; i++ ) {
		trans ( a [ i ] , b , x , i );
	}
	for ( int i = 0 ; i < x ; i++ ) {
		for ( int j = 0 ; j < y ; j++ ) {
			printf ( "%d " , b [ i ] [ j ] );
		}
		printf ("\n");
	}
	free ( m );
	free ( b );
	return 0;
} 
