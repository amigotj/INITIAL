#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,one,sixty,ten,price,price60,price10;
	scanf("%d",&n);
	sixty=(n/60);
	ten=((n%60)/10);
	one=((n%60)%10);
//	printf("%d %d %d = %d",sixty,ten,one,(sixty*440+ten*125+one*15));
	printf("\n");
	price=sixty*440+ten*125+one*15;
	price60=(sixty+1)*440;	
	price10=sixty*440+(ten+1)*125;
	if ((price<price60) && (price<price10)) printf("%d %d %d",one,ten,sixty); 
	if ((price60<price) && (price60<price10)) printf("%d %d %d",0,0,sixty+1);
	if ((price10<price) && (price10<price60)) printf("%d %d %d",0,ten+1,sixty);	
//		else if (srav60<srav10) 
//		printf("%d\n",srav60);
//		else	printf("%d\n",srav10);

	scanf("%d",one);
	return 0;
}
