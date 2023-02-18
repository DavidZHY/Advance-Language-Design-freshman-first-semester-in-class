#include <stdio.h>

float MAX (float a , float b);
float Max (float a , float b);

float MAX (float a , float b) {
	switch (a > b) {
		case 1 : return a;
		case 0 : return b;
		default : printf("Unanticipated error occured");
	}
}

/*Another solution is shown below*/
float Max (float a , float b) {
	float i;
	i = a > b ? a : b;
	return i;
}

/*Main function run with a newly defined function*/
int main () {
	float x , y , c;
	printf ("please input x and y\n");
	scanf ("%f%f" , &x , &y);
	c = MAX (x , y);
	printf ("MAX of %f and %f is %f" , x , y , c);
	return 0;
}
