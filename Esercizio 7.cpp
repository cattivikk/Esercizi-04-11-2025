#include <stdio.h>

int main()
{
	int n;
	
	printf("Quanti elementi vuoi sommare?: ");
	scanf("%d", &n);
	
	int array[n];
	
	for (int i=0; i<n; i++)
	{
		printf("Elemento %d: ", i);
		scanf("%d", &array[i]);
	}
	
	int somma=0;
	
	for (int i=0; i<n; i++)
	{
		if (i % 2 == 0)
			{
			somma= somma + array[i];
			}
		
		
	}
	printf("La somma dei valori all'interno dei numeri pari e: %d", somma);
	
}
