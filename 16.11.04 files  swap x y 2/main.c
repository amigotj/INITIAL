#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
	FILE * input;
	FILE * output;
	input=fopen("input.txt","rt");
	output=fopen("output.txt","wt");
	char buff[5];
	int i;
	buff[0]='1';
	buff[1]='2';
	buff[2]='3';
	
	if (!input) return 1;
	if (!output) return 1; // ne obez ved' esli net sam sozdastsa
	i=0;
	while (fgets(buff,5, input)!=NULL)
	{
		i=0;
		while (i<strlen(buff))
		{
			if (buff[i]=='x') buff[i]='y';
			printf("%c",buff[i]);
			fprintf(output,"%c",buff[i]);
			i++;
		}
	}
	printf("\n");
/*	for (i=0; i<strlen(buff); i++)
	{
		if (buff[i]=='x') buff[i]='y';
		printf("%c",buff[i]);
		fprintf(output,"%c",buff[i]);
	}
*/	printf("\nHello C-Free!\n");
	return 0;
}
	
