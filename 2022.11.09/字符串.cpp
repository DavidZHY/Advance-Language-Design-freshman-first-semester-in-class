#include <stdio.h>

int main () {
	int size = 0;
	char c [ 100 ] = { 'I' , ' ' , 'a' , 'm' , ' ' , 'a' , ' ' , 'b' , 'o' , 'y' };
	while ( c [ size ] != '\0' ) {
		size++;
	}
	printf ( "%d" , size );
	return 0;
}
