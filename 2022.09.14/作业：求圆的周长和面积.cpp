#include<stdio.h>
int main () {
	double r , C , S;
	r = 2;
	S = 3.14159 * r * r;
	C = 2 * r * 3.14159; 
	printf("The perimeter is %lf\n" , C);
	printf("The area is %lf" , S);
	return 0;
}
