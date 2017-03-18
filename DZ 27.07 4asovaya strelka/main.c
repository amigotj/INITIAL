#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int d;		// dana strelka ot 0 do 360  perevesti v 4asi i minuti
	scanf("%d",&d);
//	if (d<0) {
//		d=360+d;
//	}
	printf("It is %d hours %d minutes.",d%360/30,d%360%30*2);
	return 0;
}


