#include <stdio.h>
#define dim 5

int main ()
{
	int lista[dim], i, pari=0, dispari=0;
	
	printf("Inserisci %d numeri e trovi quanti sono pari e quanti dispari:\n", dim);
	for(i=0;i<dim;i++)
	{
		scanf("%d", &lista[i]);
		if(lista[i]%2 == 0)
		{
			pari+=1;
		}
		else
		{
			dispari+=1;
		}
		
	}
	printf("I numeri pari sono %d, quelli dispari %d.", pari, dispari);
	
}
