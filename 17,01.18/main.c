#include <stdio.h>
void NumberToWords (int);

int main(int argc, char *argv[])
{
	int number;
	scanf("%d/n",&number);
	printf("  number = %d\n\n\n",number);
	NumberToWords(number);
	
}

void NumberToWords(int number)
{
	int d;
	d=10;
	while (number/d!=0)
	{
		printf("    %d %d",number/d,d);
		d=d*10;
	}
	d=d/10;
	printf("\n\n\ d = %d   \n\n",d);
	printf("\n\n\ number/d = %d   \n\n",number/d);
	
	
	while (d!=0)
	{
		if (d<10)
		{
			switch 	((number/d)%10)
			{
//				case 0:
//					printf(" zero");
//					break;	
				case 1:
					printf(" one");
					break;	
				case 2:
					printf(" two");
					break;	
				case 3:
					printf(" three");
					break;	
				case 4:
					printf(" four");
					break;	
				case 5:
					printf(" five");
					break;	
				case 6:
					printf(" six");
					break;	
				case 7:
					printf(" seven");
					break;	
				case 8:
					printf(" eight");
					break;	
				case 9:
					printf(" nine");
					break;																																	
			}
		}
		if (d==10)
		{
			switch 	((number/d)%10)
			{
//				case 0:
//					printf(" zero");
//					break;	
				case 1:
					printf(" one");
					break;	
				case 2:
					printf(" twenty");
					break;	
				case 3:
					printf(" therty");
					break;	
				case 4:
					printf(" fourty");
					break;	
				case 5:
					printf(" fivty");
					break;	
				case 6:
					printf(" sixty ");
					break;	
				case 7:
					printf(" seventy");
					break;	
				case 8:
					printf(" eighty");
					break;	
				case 9:
					printf(" ninty");
					break;																																	
			}
			
		}
		if (d==100)
		{
			switch 	((number/d)%10)
			{
//				case 0:
//					printf(" zero");
//					break;	
				case 1:
					printf(" one hundred");
					break;	
				case 2:
					printf(" two hundred");
					break;	
				case 3:
					printf(" three hundred");
					break;	
				case 4:
					printf(" four hundred");
					break;	
				case 5:
					printf(" five hundred");
					break;	
				case 6:
					printf(" six hundred");
					break;	
				case 7:
					printf(" seven hundred");
					break;	
				case 8:
					printf(" eight hundred");
					break;	
				case 9:
					printf(" nine hundred");
					break;																																	
			}
		}		
		if (d==1000)
		{
			switch 	((number/d)%10)
			{
//				case 0:
//					printf(" zero");
//					break;	
				case 1:
					printf(" one thousand");
					break;	
				case 2:
					printf(" two thousand");
					break;	
				case 3:
					printf(" three thousand");
					break;	
				case 4:
					printf(" four thousand");
					break;	
				case 5:
					printf(" five thousand");
					break;	
				case 6:
					printf(" six thousand");
					break;	
				case 7:
					printf(" seven thousand");
					break;	
				case 8:
					printf(" eight thousand");
					break;	
				case 9:
					printf(" nine thousand");
					break;																																	
			}
		}		
		d=d/10;
	}
	
	printf("\n\nHello C-Free!\n");
	return 0;
}
