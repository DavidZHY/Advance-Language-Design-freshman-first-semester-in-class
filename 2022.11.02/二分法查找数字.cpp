#include <stdio.h>

int findF ( int a [] , int n , int value );
void sortbubble ( int a [] , int n );

void sortbubble ( int a [] , int n ) {
	int temp = 0;
	for ( int i = 0 ; i < n ; i++ ) {
		for ( int j = 0 ; j < 10 - i - 1 ; j++ ) {
			if ( a [ j + 1 ] < a [ j ] ) {
				temp = a [ j + 1 ];
				a [ j + 1 ] = a [ j ];
				a [ j ] = temp;
				temp = 0;
			}
		}
	} 
}

int findF ( int a [] , int n , int value ) {
	int start = 0 , end = n - 1;
	int temp;
	while ( end - start > 0 ) {
		temp = ( start + end ) / 2;
		if ( a [ temp ] > value ) {
			end = temp;
		} else if ( a [ temp ] == value) {
			end = temp;
			break;
		} else {
			start = temp; 
		}
	}
	return end;
}

int main () {
	int value , result;
	int a [ 10 ] = { 10 , 9 , 8 , 7 , 6 , 5 , 4 , 3 , 2 , 1 };
	scanf ( "%d" , &value);
	sortbubble ( a , 10 );
	result = findF ( a , 10 , value );
	printf ( "%d" , result + 1 );
	return 0;
}
