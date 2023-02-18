#include<stdio.h>
int Max (int a , int b , int c );

int Max (int a , int b , int c) {
	int m;
	if (a > b) {
		m = a;
	} else {
		m = b; 
	}
	if (m < c) {
		m = c;
	}
	return m;
}

int main () {
	int a , b , c , m;
	scanf("%d,%d,%d" , &a , &b , &c);
	m = Max ( a , b , c);
	printf("m=%d" , m);
	return 0;
}
