#include <stdio.h>
void translateSmallLarge(char*);


int main(int argc, char *argv[])
{
	char word[]="ewryy";
	gets(word);
	int i=0;
	printf("\n--------------\n ");
	while (word[i]!='\0')
	{
		printf("%c",word[i]);
		++i;
	}
	printf("\n--------------\n ");
	printf("Hello C-Free!\n");
	return 0;
}
