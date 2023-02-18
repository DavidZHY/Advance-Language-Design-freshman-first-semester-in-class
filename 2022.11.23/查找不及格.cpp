#include <stdio.h>

void searchprint ( float a [ ] );

void searchprint ( float a [ ] ) {
	int temp = 0;
	for ( int i = 0 ; i < 4 ; i++ ) {
		if ( a [ i ] < 60 ) {
			temp++;
		}
	}
	if ( temp ) {
		for ( int i = 0 ; i < 4 ; i++ ) {
			printf ( "%.1f " , a [ i ] );
		}
		printf ("\n");
	}
}

int main () {
	float score [ 3 ] [ 4 ] = { { 65 , 57 , 70 , 60 } , { 58 , 87 , 90 , 81 } , { 90 , 99 , 100 , 98 } };
	searchprint ( score [ 0 ] );
	searchprint ( score [ 1 ] );
	searchprint ( score [ 2 ] );
	return 0;
}
