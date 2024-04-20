#include <stdio.h>
int mult (int x,int y)
{
	if(y==1)
	{
		return x;
	}
	else
	{
		return x + mult(x,y-1);
	}
}
int main ()
{
	int x,y;
	printf("Digite o numero que quer multiplicar e seu multiplicador\n");
	scanf("%d %d",&x,&y);
	printf("\n%d",mult(x,y));
}
