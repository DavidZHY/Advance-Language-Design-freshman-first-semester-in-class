#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAXGUESSTIME 10

int main () {
	srand ( time (0) );
	int nmagicnumber = rand() % 101 - 1;
	int nplayerinput = 1;
	int nresult = -1;
	int ncount = 0;
	for ( ; nresult != 0 ; ) {
		printf ("������һ��0-100��Χ�ڵ����֣�");
		scanf ("%d" , &nplayerinput);
		ncount++;
		if ( nplayerinput < 0 || nplayerinput > 100 ) {
			printf ("����ֵ��Χ����\n");
		}
		if ( nplayerinput > nmagicnumber ) {
			nresult = 1;
		} else if ( nplayerinput == nmagicnumber ) {
			nresult = 0;
		} else {
		
		}
		switch ( nresult ) {
			case -1: {
				printf ("С��\n");
				break;
			}
			case 0: {
				printf ("�¶���!\n");
				printf ("��һ������%d��\n" , ncount );
				break;
			}
			case 1: {
				printf ("����\n");
				break;
			}
			default: {
				break;
			}
		}
		if ( ncount >= MAXGUESSTIME ) {
			break;
		}
	}
	printf ("��Ϸ������");
	return 0;
}
