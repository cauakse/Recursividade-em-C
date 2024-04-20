#include <stdio.h>
int resto(int x, int y)
{
	if(x>=y)
	{
		return resto(x-y,y);
	}
	else
	{
		return x;
	}
}
int main ()
{
	int x,y;
	printf("Digite os numeros\n");
	scanf("%d %d",&x,&y);
	printf("\n%d",resto(x,y));
}
