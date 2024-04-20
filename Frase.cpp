#include <stdio.h>
#include <string.h>
#include <conio2.h>
#define MAXSTRING 100

void palavra (char frase[MAXSTRING],int i)
{
	if(i<strlen(frase)-1)
	{
		char aux[20];
		int j;
		for(j=0;i<MAXSTRING&&frase[i]!='\0'&&frase[i]!=' ';i++,j++)
		{
			aux[j]=frase[i];	
		}
		aux[j]=frase[i++];
		aux[j+1]='\0';
		palavra(frase,i);
		puts(aux);	
	}
}
int main ()
{
	char frase[MAXSTRING];
	int i;
	printf("Digite a frase\n");
	gets(frase);
		palavra(frase,0);
		return 0;
}
