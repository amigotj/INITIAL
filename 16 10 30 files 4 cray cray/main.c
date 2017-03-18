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
*/
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