#include <stdio.h>
int MDC (int x , int y)
{
	if(y==0)
	return x;
	else
	return MDC(y,x%y);
}
int main ()
{
	int num,num2;
	printf("Digite os numeros\n");
	scanf("%d %d",&num,&num2);
	printf("O MDC deles eh: %d", MDC(num,num2));
}

