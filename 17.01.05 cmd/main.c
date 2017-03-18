#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
void shutdown();
int main()
{
	shutdown();
	char y1;
    printf("Do you want to abort y/n?");
//	y = 'n';
	y1=getchar();
	
	printf("%c",y1);
	if ((y1=='Y') || (y1=='y')) 
		abort();
	printf("\n");
 	return 0;
	
}




void shutdown()
{
	int n;
 	printf("How soon do you want to shutdown your pc ( in seconds ) : ");    
    scanf("%d", &n);
    
    char* c;
    c = (char *)malloc(10 * sizeof(char)); 
    int v = 0; //количество цифр в числе n
    //разбиваем на отдельные символы число n
    while (n > 9)
    {
        c[v++] = (n % 10) + '0';
        n = n / 10;
    }
    c[v++] = n + '0';
    c[v] = '\0';
    char t;
    int i;
    //инвертируем массив символов
    for (i = 0; i < v / 2; i++)
    {
        t = c[i];
        c[i] = c[v - 1 - i];
        c[v - 1 - i] = t;
    }
    v = 0;
    while (c[v] != '\0')
        printf("%c", c[v++]);
    printf("\n");
    char CH[] = {"C:\\WINDOWS\\System32\\shutdown /s /t "};
    system(strcat(CH,c));
    free(c); 

}

void abort ()
{
	system("C:\\WINDOWS\\System32\\shutdown /a");

}