#include <stdio.h>

void inverse ( int* a , int num );

void inverse ( int* a , int num ) {
	int b [ num ];
	for ( int i = 0 ; i < num ; i++ ) {
		b [ i ] = *( a + num - 1 - i );
	}
	for ( int i = 0 ; i < num ; i++ ) {
		* ( a + i ) = b [ i ];
	}
}

int main () {
	int a [ 100 ] = { 0 };
	int num;
	int temp;
	scanf ( "%d" , &num );
	for ( int i = 0 ; i < num ; i++ ) {
		scanf ( "%d" , &temp );
		a [ i ] = temp;
	}
	inverse ( a , num );
	for ( int i = 0 ; i < num ; i++ ) {
		printf ( "%d " , a [ i ] );
	}
	return 0;
}
