#include <stdio.h>
#define dim 5

int main ()
{
	int lista[dim], i, x, contatore=0;
	
	printf("Inserisci %d numeri:\n",dim);
	for(i=0;i<dim;i++)
	{
		scanf("%d", &lista[i]);
	}
	
	printf("Inserisci un numero e verifica se e dentro la lista: ");
	scanf("%d", &x);
	
	for(i=0; i<dim; i++)
	{	
		if(x == lista[i])
		{
			printf("%d e presente\n", x);
			contatore+=1;	
		}
	}
	if (contatore == 0)
	{
		printf("%d non e presente.",x);
	}

}
