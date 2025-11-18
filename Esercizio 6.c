#include <stdio.h>
#define dim 5

int main() {
    int arr[dim] = {3, 5, 7, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
	int i;
    printf("Elementi in ordine inverso:\n");
    for (i = dim-1; i>=0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
