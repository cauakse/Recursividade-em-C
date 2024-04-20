#include <stdio.h>
int hanoi(int disco,char ori,char dest,char aux)
{
	if(disco==1)
	{
		printf("Mover disco: %d da torre %c para torre %c\n",disco,ori,dest);
	}
	else
	{
		hanoi(disco-1,ori,aux,dest);
		printf("Mover disco: %d da torre %c para torre %c\n",disco,ori,dest);
		hanoi(disco-1,aux,dest,ori);
	}
}
	int main ()
	{
		int x;
		printf("Digite a quantidade de discos\n");
		scanf("%d",&x);
		hanoi(x,'A','C','B');
		return 0;
	}

