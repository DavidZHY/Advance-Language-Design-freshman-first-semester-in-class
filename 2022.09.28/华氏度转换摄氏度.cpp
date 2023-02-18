#include <stdio.h>

int main () {
	float C , F;
	printf ("Input a fahrenheit degree: ");
	scanf ("%f" , &F);
	C = ( 5.0f / 9.0f ) * ( F - 32 );
	printf ("The corresponding celsius degree is: %f" , C);
	return 0;
}
