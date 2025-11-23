#include <stdio.h>
#define dim 5

int main()
{
	
	int array[dim], i, somma=0;
	
	printf("Inserisci %d numeri: ",dim);
		
	for(i=0; i<dim; i++)
	{
		scanf("%d", &array[i]);
		
		if (array[dim]% 2 == 0)
			{
			somma= somma+array[i];
			}
		
		
	}
	printf("La somma dei valori contenuti nell'array pari e di: %d", somma);
}
