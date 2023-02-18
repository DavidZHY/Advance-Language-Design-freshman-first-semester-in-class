#include <stdio.h>

struct student {
	char name [ 10 ];
	int age;
} boy , girl;

int main () {
	scanf ( "%s" , boy.name );
	scanf ( "%d" , &boy.age );
	scanf ( "%s" , girl.name );
	scanf ( "%d" , &girl.age );
	printf ( "%s %d\n%s %d" , boy.name , boy.age , girl.name , girl.age);
	return 0;
}
