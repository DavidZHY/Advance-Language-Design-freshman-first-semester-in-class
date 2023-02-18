#include <stdio.h>

void copystring ( char a [ ] , char b [ ] );

void copystring ( char a [ ] , char b [ ] ) {
	int i;
	for ( i = 0 ; a [ i ] != '\0' ; i++ ) {
		b [ i ] = a [ i ];
	}
	b [ i ] = '\0';
}

int main () {
	char a [ ] = "Hello!";
	char b [ 10 ];
	copystring ( a , b );
	printf ( "%s" , b );
	return 0;
}
