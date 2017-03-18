#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
	FILE * input;
	FILE * output;
	input=fopen("input.txt","rt");
	output=fopen("output.txt","wt");
	char buff[1000];
	int i;
	buff[0]='1';
	buff[1]='2';
	buff[2]='3';
	
	if (!input) return 1;
	if (!output) return 1; // ne obez ved' esli net sam sozdastsa
	i=0;
	while (!feof(input))
	{
		fscanf(input,"%c",&buff[i]);
		printf("%c",buff[i]);
		i++;
	}
	printf("\n");
	for (i=0; i<strlen(buff); i++)
	{
		if (buff[i]=='x') buff[i]='y';
		printf("%c",buff[i]);
		fprintf(output,"%c",buff[i]);
	}
	printf("\nHello C-Free!\n");
	return 0;
}
	
/*
		while (!feof(fo))
	{
		fscanf(fo,"%c",&x);
		printf("%c ",x);
	}
	
//	printf("%d\n",fo);
	int qwe;
	char x;
	while (!feof(fo))
	{
		fscanf(fo,"%c",&x);
		printf("%c ",x);
	}
	fclose(fo);
	scanf("%d",&qwe);
//	printf("\nHello C-Free!");
	return 0;
}




	#include<stdio.h>

	int main()
	{
		FILE *ptr_fileW;
		FILE *ptr_fileR;
		int x,qwe;

		ptr_fileW =fopen("output.txt", "a");

		if (!ptr_fileW)
			return 1;
	/*	for (x=1; x<=10; x++)
			fprintf(ptr_fileW,"%d\n", x);
/
    		char buf[1000];
    		ptr_fileR =fopen("m22.csv","r");
    		if (!ptr_fileR)
        		return 1;
    		while (fgets(buf,1000, ptr_fileR)!=NULL) 
    			{
    				if (buf[0]=='1' || buf[0]=='2')
    				fprintf(ptr_fileW,"\"%c%c:%c%c\"\, ", buf[0], buf[1], buf[3], buf[4]);
    				else
    				fprintf(ptr_fileW,"\"%c:%c%c\"\, ", buf[0], buf[2], buf[3]);
	        		printf("%s",buf);			    	
			    }
			    fprintf(ptr_fileW,"-\n");

		fclose(ptr_fileR);
		fclose(ptr_fileW);
		scanf("%d",&qwe);
		return  0;
	}
	
*/