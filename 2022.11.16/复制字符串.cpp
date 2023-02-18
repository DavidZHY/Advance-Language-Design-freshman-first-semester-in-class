#include <stdio.h>

#define N 10

int main () {
	char a [ N ];
	char b [ N ];
	char ch;
	int i;
	ch = getchar();
	for ( i = 0 ; i < N && ch != '\n' ; i++ ) {
		b [ i ] = ch;
		ch = getchar();
	}
	b [ i ] = '\0';
	for ( i = 0 ; i < N && b [ i ] != '\0' ; i++ ) {
		a [ i ] = b [ i ];
	}
	a [ i ] = '\0';
	for ( i = 0 ; i < N && a [ i ] != '\0' ; i++ ) {
		printf ( "%c" , a [ i ] );
	}
	return 0;
}
