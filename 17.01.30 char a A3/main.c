#include <stdio.h>
void translateSmallLarge(char*);


int main(int argc, char *argv[])
{
	char word[]="ewryy";
	gets(word);
	translateSmallLarge(word);
//	printf("%c zna4enie  ",*a);
	return 0;
}


translateSmallLarge(char *words)
{
	int i=0;
	printf("\n--------------\n ");
	while (words[i]!='\0')
	{
		printf("%c",words[i]);
		++i;
	}
	printf("\n--------------\n ");
	int a = &words;
	printf("%p adress    ",a);
	printf("\n%s\n",words);		
	
	
	printf("\n--------------\n ");
	i=0;
	while(words[i]!='\0')
	{
		if(words[i]>=97 && words[i]<=122)
		{
			printf("%c",words[i]-32);
		}
		else
		{
			printf("%c",words[i]);
		}
		i++;
	}	
	char b = 'l';
	printf("\n %d\n",b);
}