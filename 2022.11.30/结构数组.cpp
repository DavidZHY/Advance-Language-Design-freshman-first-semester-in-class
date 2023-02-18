#include <stdio.h>

#define N 2

struct stu {
	int num;
	char* name;
	char gender;
	int score;
};

struct stu student [ N ] = {
	{ 10101 , "Zhang" , 'M' , 98 } , 
	{ 10102 , "Li" , 'F' , 95 }
};

int main () {
	for ( int i = 0 ; i < N ; i++ ) {
		printf ( "%d " , student [ i ] . num );
		printf ( "%s " , student [ i ] . name );
		printf ( "%c " , student [ i ] . gender );
		printf ( "%d\n" , student [ i ] . score );
	}
	return 0;
}
