#include <stdio.h>
int MDC (int x,int y)
{
	if(x==y)
	{
		return y;
	}
	if(x<y)
	{
		return MDC(y,x);
	}
	if(x>y)
	{
		return MDC(x-y,y);
	}
}
int main ()
{
	int x,y;
	printf("Digite os valores\n");
	scanf("%d %d",&x,&y);
	printf("\n%d",MDC(x,y));
	return 0;
}
