#include <stdio.h>

char* substring ( const char* consts , int start , int end );

char* substring ( const char* consts , int start , int end ) {
	char* pNewString = new char [ end - start + 1 + 1 ];
	int j = 0;
	for ( int i = start ; i < end ; i++ , j++ ) {
		pNewString [ j ] = consts [ i ];
	}
	pNewString [ j ] = '\0';
	return pNewString;
}

int main () {
	char s [ ] = { "Chengdu, Sichuan" };
	char* a = substring ( s , 0 , 7 );
	printf ( "%s\n" , a );
	delete [] a;
	return 0;
}
