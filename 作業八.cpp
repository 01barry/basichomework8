#include "stdio.h"
#include "stdlib.h"
int main()
{
	int gc,xw;
	printf("1-n的所有質數 n:");
	scanf("%d",&xw);
	for(int b=2;b<=xw;b++)
	{
		gc=0;
		for(int i=1;i<=b;i++)
		if(b%i==0)
		gc++;
		if(gc==2)
		printf("%d\t",b);
	}
	printf("\n");
	system("PAUSE");
	return 0;
} 
