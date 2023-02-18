#include <stdio.h>

int findF ( int a [] , int n , int value );

int findF ( int a [] , int n , int value ) {
	int i = 0;
	while ( a [ i ] != value && i <= n ) {
		i++;
	}
	return i;
}

int main () {
	int value , result;
	int a [ 10 ] = { 10 , 9 , 8 , 7 , 6 , 5 , 4 , 3 , 2 , 1 };
	scanf ( "%d" , &value);
	result = findF ( a , 10 , value );
	printf ( "%d" , result + 1 );
	return 0;
}
