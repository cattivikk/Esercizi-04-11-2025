#include <stdio.h>
#define dim 5

int main ()
{
    int lista[dim], i;
    float somma=0;

    printf("Inserisci tot numeri e vedrai la somma di essi:\n");

    for(i=0;i<dim;i++)
    {
        scanf("%d", &lista[i]);
        somma= somma + lista[i];
    }

    printf("La media e: %.2f", somma/dim);
    
    
}

