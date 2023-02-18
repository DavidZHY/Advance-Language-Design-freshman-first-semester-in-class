#include <stdio.h>

#define N 100

char* strcat ( char* strdes , char* strsor );

char* strcat ( char* strdes , char* strsor ) {
	int i;
	for ( i = 0 ; *( strdes + i ) != '\0' ; i++) {
		
	}
	for ( int j = 0 ; *( strsor + j ) != '\0' ; j++ ) {
		*( strdes + i  + j ) = *( strsor + j );
	}
	for ( i = 0 ; *( strdes + i ) != '\0' ; i++ ) {
		*( strsor + i ) = *( strdes + i );
	}
	*( strsor + i - 2 ) = '\0';
	return strsor;
}

int main () {
	char a [ N ];
	char b [ N ];
	char ch;
	int i;
	char* x = a;
	char* y = b;
	ch = getchar();
	for ( i = 0 ; i < N && ch != '\n' ; i++ ) {
		a [ i ] = ch;
		ch = getchar();
	}
	a [ i ] = '\0';
	ch = getchar();
	for ( i = 0 ; i < N && ch != '\n' ; i++ ) {
		b [ i ] = ch;
		ch = getchar();
	}
	b [ i ] = '\0';
	strcat ( x , y );
	printf ( "%s" , b );
	printf ("\n");
	for ( i = 0 ; b [ i ] != '\0' ; i++ ) {
		printf ( "%c" , b [ i ] );
	}
	return 0;
}
