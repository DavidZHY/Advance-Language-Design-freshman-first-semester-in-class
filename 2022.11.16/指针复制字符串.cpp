#include <stdio.h>

int main () {
	char a [ ] = "Hello!";
	char* b;
	b = a;
	for ( int i = 0 ; b [ i ] != '\0' ; i++ ) {
		printf ( "%c" , b [ i ] );
	}
	return 0;
}
