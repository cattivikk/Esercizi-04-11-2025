
#include <stdio.h>
#define dim 5

int main ()
{
	int lista[dim], i, maggiore, minore;
	
	printf("Inserisci %d i numeri e trovi il valore massimo e minimo:\n", dim);
	for(i=0;i<dim;i++)
	{
		scanf("%d", &lista[i]);
		
	}
		maggiore=lista[0];
		minore=lista[0];
	
		for(i=0;i<dim;i++)
	{
			if (lista[i]>maggiore)
		{
			maggiore= lista[i];
		}
	}
		
		for(i=0;i<dim;i++)
	{
			if (lista[i]<minore)
		{
			minore= lista[i];
		}
	}
		printf("Il numero maggiore e %d\n",maggiore);
		printf("Il numero minore e %d\n",minore);
	
}
