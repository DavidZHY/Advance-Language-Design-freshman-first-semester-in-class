#include <stdio.h>
#include <ctype.h>

#define FORMAT "%p,%p\n"

int main () {
	int a [ 3 ] [ 2 ] = { { 1 , 2 } , { 3 , 4 } , { 5 , 6 } };
	printf ( FORMAT , a , *a );
	printf ( FORMAT , a [ 0 ] , *( a + 0 ) );
	printf ( FORMAT , &a [ 0 ] , &a [ 0 ] [ 0 ] );
	printf ( FORMAT , a [ 1 ] , a + 1 );
	printf ( FORMAT , &a [ 1 ] [ 0 ] , *( a + 1 ) + 0 );
	printf ( FORMAT , a [ 2 ] , *( a + 2 ) );
	printf ( FORMAT , &a [ 2 ] , a + 2 );
	printf ( FORMAT , a [ 1 ] [ 0 ] , *( *( a + 1 ) + 0 ) );
	return 0;
}
