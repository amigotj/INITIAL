#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
	FILE * input;
	FILE * output;
	input=fopen("input.txt","rt");
	output=fopen("output.txt","wt");
	char buff[1000];
	int i,glass,soglass,vsego_bukv;
	buff[0]='1';
	buff[1]='2';
	buff[2]='3';
	
	if (!input) return 1;
	if (!output) return 1; // ne obez ved' esli net sam sozdastsa
	glass,soglass=0;
	vsego_bukv=0;
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
			printf("%c",buff[i]);
			fprintf(output,"%c",buff[i]);
			i++;
			vsego_bukv++;
			
		}
		
	}
	printf("\nglassnih %d soglasnih %d \nprocent glass %d \nprocent soglass %d\n",glass,soglass,((100*glass)/vsego_bukv),((100*soglass)/vsego_bukv));
	return 0;
}
	
