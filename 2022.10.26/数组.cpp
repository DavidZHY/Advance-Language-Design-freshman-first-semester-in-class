#include <stdio.h>

int main () {
	int a [ 20 ] = { 1 , 1 };
	int i = 0;
	for ( i = 2 ; i <= 19 ; i++ ) {
		a [ i ] = a [ i - 1 ] + a [ i - 2 ];
	}
	for ( i = 0 ; i <= 19 ; i++ ) {
		printf ( "%d " , a [ i ]);
	}
	return 0;
}
