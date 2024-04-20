#include <stdio.h>
int somatorio(int x,int y)
{
	if(y>0)
	{
		return x*x + somatorio(x,--y);
	}
	else
	return 0;
}
int main ()
{
	int x,y;
	printf("Digite o numero e quantas vezes quer fazer o somatorio desse numero vezes ele mesmo\n");
	scanf("%d %d",&x,&y);
	printf("%d",somatorio(x,y));
}
