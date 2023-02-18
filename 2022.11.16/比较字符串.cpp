#include <stdio.h>

int strcmp ( const char* string1 , const char* string2 );

int strcmp ( const char* string1 , const char* string2 ) {
	int m = 0;
	int i = 0;
	while ( *( string1 + i ) != '\0' || *( string2 + i ) != '\0' && m == 0 ) {
		m = *( string2 + i ) - *( string1 + i );
		i++;
	}
	if ( m > 0 ) {
		return 1;
	} else if ( m < 0 ) {
		return -1;
	} else {
		return 0;
	}
}

int main () {
	char a [ 10 ] = { '1' , '2' , '3' , '4' };
	char b [ 10 ] = { '1' , '2' , '3' , '4' };
	char* x = a;
	char* y = b;
	printf ( "%d" , strcmp ( x , y ) );
	return 0;
}
