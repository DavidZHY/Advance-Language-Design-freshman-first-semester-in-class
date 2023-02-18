#include <stdio.h>

int main () {
	char c [ 50 ] = { 0 };
	int num = 0 , CH = 0 , ch = 0 , other = 0;
	scanf ( "%s" , c );
	for ( int i = 0 ; i < 50 ; i++ ) {
		if ( c [ i ] >= 48 && c [ i ] <= 57 ) {
			num++;
		} else if ( c [ i ] >= 65 && c [ i ] <= 90 ) {
			CH++;
		} else if ( c [ i ] >= 97 && c [ i ] <= 122 ) {
			ch++;
		} else if ( c [ i ] >= 33 && c [ i ] <= 127 ) {
			other++;
		}
	}
	printf ( "There are %d numbers, %d capital letters, %d normal letters, %d other sumbols." , num , CH , ch , other );
	return 0;
}
