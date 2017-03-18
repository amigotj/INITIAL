#include <stdio.h>
#include <string.h>

int summ(int x, int y)
{
	int z;
	z=x+y;
	return z;
}

int main(int argc, char *argv[])
{
	int a;
	a=summ(3,2);
	printf("\n  %d\n",a);
/*
	FILE * input;
	FILE * output;
	input=fopen("input.txt","rt");
	output=fopen("output.txt","wt");
	char buff[1000];
	int i,glass,soglass; //vsego_simvolov;

	
	if (!input) return 1;
	if (!output) return 1; // ne obez ved' esli net sam sozdastsa
	glass,soglass=0;
//	vsego_simvolov=0;
	while (fgets(buff,1000, input)!=NULL)
	{
		i=0;
		while (i<strlen(buff))
		{
			switch(buff[i])
			{
				case ('a'):
				case ('e'):
				case ('i'):
				case ('j'):
				case ('o'):
				case ('q'):
				case ('u'):
				case ('y'):
					glass++;
					break;
				case ('b'):
				case ('c'):
				case ('d'):
				case ('f'):
				case ('g'):
				case ('h'):
				case ('k'):
				case ('l'):
				case ('m'):	
				case ('n'):
				case ('p'):
				case ('r'):
				case ('s'):
				case ('t'):
				case ('v'):
				case ('w'):
				case ('x'):
				case ('z'):																											
					soglass++;
					break;
			}	
			i++;
//			printf("%c",buff[i]);
//			fprintf(output,"%c",buff[i]);
//			vsego_bukv++;
			
		}
		
	}
	printf("\nglassnih %d soglasnih %d \nprocent glass %d \nprocent soglass %d\n",glass,soglass,((100*glass)/(soglass+glass)),((100*soglass)/(soglass+glass)));
*/
	return 0;
}
	
 