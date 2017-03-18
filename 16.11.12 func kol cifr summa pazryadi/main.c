#include <stdio.h>
#include <string.h>

int kolcifr (int);	
int summacifr (int);
int kolrazryadov (int);

int main(int argc, char *argv[])
{
	int chislo,a;
	a=5;
	printf("\nVvedite 4islo\n");
	scanf("%d",&chislo);
	printf("\nKol-vo cifr %d\n",kolcifr(chislo));
	printf("\nSumma cifr %d\n",summacifr(chislo));
	printf("\nKol-vo razryadov %d\n",kolrazryadov(chislo));
	printf("\nIzmenyaem A %d\n",a);
	

	return 0;
}

 int kolcifr (int chislo)
{
	int kol,cifra,flag0,flag1,flag2,flag3,flag4,flag5,flag6,flag7,flag8,flag9;
	kol=0;
	flag1=0;
	flag2=0;	
	flag3=0;
	flag4=0;
	flag5=0;
	flag6=0;
	flag7=0;
	flag8=0;
	flag9=0;
	flag0=0;				
	while(chislo>0)
	{
		cifra=(chislo%10);
//		printf("\n%d",cifra);
		switch(cifra)
		{
				case(1):
				if (flag1==0) kol++;
				flag1=1;
				break;

				case(2):
				if (flag2==0) kol++;
				flag2=1;
				break;

				case(3):
				if (flag3==0) kol++;
				flag3=1;
				break;

				case(4):
				if (flag4==0) kol++;
				flag4=1;
				break;
				
				case(5):
				if (flag5==0) kol++;
				flag5=1;
				break;

				case(6):
				if (flag6==0) kol++;
				flag6=1;
				break;
				
				case(7):
				if (flag7==0) kol++;
				flag7=1;
				break;

				case(8):
				if (flag8==0) kol++;
				flag8=1;
				break;
				
				case(9):
				if (flag9==0) kol++;
				flag9=1;
				break;

				case(0):
				if (flag0==0) kol++;
				flag0=1;
				break;
		}
		chislo=chislo/10;
	}

	return kol;
}

int summacifr (int chislo)
{
	int summa;
	summa=0;
				
	while(chislo>0)
	{
		summa=summa+(chislo%10);
//		printf("\n%d",summa);
		chislo=chislo/10;
	}

/*	if (x>y && x>z)
		max=x;
	else if (y>z)
		max=y;
	else
		max=z;
*/	return summa;
}


int kolrazryadov (int chislo)
{
	int kol;
	kol=0;
				
	while(chislo>0)
	{
		kol++;
//		printf("\n%d",kol);
		chislo=chislo/10;
	}
	return kol;
}