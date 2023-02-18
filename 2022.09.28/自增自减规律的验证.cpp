#include <stdio.h>

int main () {
	int a = 5;
	int b , c;
	int i = 10;
	b = a++;
	c = ++b;
	
	printf ("a = %d , b = %d , c = %d\n" , a , b , c);// 6 6 6
	printf ("%d\n" , ++i);//11
	printf ("%d\n" , --i);//10
	printf ("%d\n" , i++);//10
	printf ("%d\n" , i--);//11
	printf ("%d\n" , -i++);//-10
	printf ("%d\n" , -i--);//-11
	return 0;
}
