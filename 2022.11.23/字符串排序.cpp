#include <stdio.h>
#include <string.h>
#include <algorithm>

void sort ( char* name [ ] , int n );
void print ( char* name [ ] , int n );

void sort ( char* name [ ] , int n ) {
	char* temp;
	for ( int i = 0 ; i < n ; i++ ) {
		for ( int j = 0 ; j < n - i - 1 ; j++ ) {
			if ( strcmp ( ( name [ j ] ) , ( name [ j + 1 ] ) ) > 0 ) {
				temp = ( name [ j ] );
				( name  [ j ] ) = ( name [ j + 1 ] );
				( name [ j + 1 ] ) = temp;
			}
		}
	}
}

void print ( char* name [ ] , int n ) {
	for ( int i = 0 ; i < n ; i++ ) {
		printf ( "%s\n" , name [ i ] );
	}
}

int main () {
	char* name [ ] = { "Follow me" , "BASIC" , "Great Wall" , "FORTRAN" , "Computer design" };
	int n = 5;
	sort ( name , n );
	print ( name , n );
	return 0;
}
