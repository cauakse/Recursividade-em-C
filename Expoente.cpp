#include <stdio.h>
int pow(int x, int y)
{
	if(y==1)
	return x;
	else
	return x * pow(x,y-1);
}
int main ()
{
	int x ,y;
	printf("Digite os numeros\n");
	scanf("%d %d",&x,&y);
	printf("%d elevado a %d = %d",x,y,pow(x,y));
}

