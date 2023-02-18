#include <stdio.h>

int main () {
	int a , b;
	int *pointer_a , *pointer_b;
	a = 100;
	b = 10;
	pointer_a = &a;
	pointer_b = &b;
	printf ( "%d %d\n" , a , b );
	printf ( "%d %d\n" , *pointer_a , *pointer_b );
	return 0;
}
