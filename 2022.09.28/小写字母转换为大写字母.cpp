#include <stdio.h>

char ToUpper (char c);

char ToUpper (char c) {
	c -= 32;
	return c;
}

int main () {
	char c1 , c2;
	printf ("Please insert 2 letters:");
	scanf ("%c,%c" , &c1 , &c2);
	printf ("The corresponding capitalized letters are %c and %c" , ToUpper ( c1 ) , ToUpper ( c2 ) );
	return 0;
} 
