#include <stdio.h>

int main () {
	int a [ 100 ] = { 0 };
	int b [ 100 ] = { 0 };
	int c [ 100 ] = { 0 };
	char ch;
	int na , nb , nc;
	na = 0;
	ch = getchar();
	while ( ch != '\n' ) {
		a [ na ] = ch - 48;
		ch = getchar();
		na++;
	}
	nb = 0;
	ch = getchar();
	while ( ch != '\n' ) {
		b [ nb ] = ch - 48;
		ch = getchar();
		nb++;
	}
	nc = 0;
	ch = getchar();
	while ( ch != '\n' ) {
		c [ nc ] = ch - 48;
		ch = getchar();
		nc++;
	}
	
	return 0; 
} 
