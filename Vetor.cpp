#include <stdio.h>
#define TF 10
int contrario(int vet[TF],int TL)
{
	
	if(TL==0)
	{
		return 0;
	}
	else
	{
		printf("%d\n",vet[TL-1]);
		return contrario(vet,TL-1);
	}
}
int main()
{
	int vet[TF],TL=0,num=1;
	printf("Digite o numero da posicao %d do vet\n",TL);
	scanf("%d",&num);
	while(TL<TF&&num!=0)
	{
		vet[TL]=num;
		TL++;
		if(TL<TF)
		{
			printf("Digite o numero da posicao %d do vet\n",TL);
			scanf("%d",&num);
		}	
	}
	printf("\n");
	contrario(vet,TL);
}
