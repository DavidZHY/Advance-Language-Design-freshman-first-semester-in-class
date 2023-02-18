#include <stdio.h>

int main () {
	char ch;
	ch = getchar();
	while ( ch != -1 ) {
		putchar ( ch );
		ch = getchar();
	}
	return 0;
}
