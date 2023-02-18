#include<stdio.h>
int Min ( int a , int b );

int main () {
	int a , b , c;
	scanf("%d,%d", &a , &b);
	c = Min ( a , b );
	printf ("The minor number is %d", c );
	return 0;
} 

int Min ( int a , int b ) {
	int c;
	if (a >= b) {
		c = b;
	} else {
		c = a;
	}
	return c;
}
