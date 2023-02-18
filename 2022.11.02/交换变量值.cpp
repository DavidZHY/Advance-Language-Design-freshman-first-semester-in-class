#include <stdio.h>

void swapnum ( int* m , int* n );

void swapnum ( int* m , int* n ) {
	printf ( "%p\n" , m );
	int temp = *m;
	*m = *n;
	*n = temp;
}

int main () {
	int a , b;
	int* x ,* y;
	scanf ( "%d%d" , &a , &b );
	x = &a;
	y = &b;
	swapnum ( x , y );
	printf ( "%d %d" , *x , *y );
	return 0;
}
