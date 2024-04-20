#include <stdio.h>
int rec(int n,int m,int &cont)
{
	cont++;
	if(n==0||n==m)
	{
		return 1;
	}
	else
	{
		return rec(n-1,m,cont)+rec(n-1,m+1,cont);
	}
}
int main()
{
	int cont=0;
	printf("%d\n",rec(5,3,cont));
	printf("%d",cont);
}
