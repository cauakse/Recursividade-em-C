#include <stdio.h>

int fibonacci(int x,int &cont)
{
	cont++;
	if(x==1||x==0)
	{
		return 1;
	}
	else
	{
		return fibonacci(x-1,cont)+fibonacci(x-2,cont);
	}
}
int main ()
{
	int num,cont=0;
	printf("Digite em qual sequencia de fibonacci deseja parar\n");
	scanf("%d",&num);
	printf("\n%d\n",fibonacci(num,cont));
	printf("%d",cont);
	
	return 0;
}
