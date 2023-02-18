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
		printf ("请输入一个0-100范围内的数字：");
		scanf ("%d" , &nplayerinput);
		ncount++;
		if ( nplayerinput < 0 || nplayerinput > 100 ) {
			printf ("输入值范围错误！\n");
		}
		if ( nplayerinput > nmagicnumber ) {
			nresult = 1;
		} else if ( nplayerinput == nmagicnumber ) {
			nresult = 0;
		} else {
		
		}
		switch ( nresult ) {
			case -1: {
				printf ("小了\n");
				break;
			}
			case 0: {
				printf ("猜对了!\n");
				printf ("你一共猜了%d次\n" , ncount );
				break;
			}
			case 1: {
				printf ("大了\n");
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
	printf ("游戏结束。");
	return 0;
}
