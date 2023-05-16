#include <stdio.h>

void imprimirInversoRecursivo(int *arr, int n) {
    if (n > 0) {
        imprimirInversoRecursivo(arr + 1, n - 1);
        printf("%d ", *arr);
    }
}


int main()
{
	int numeros[] = {1, 2, 3, 4, 5};
	imprimirInversoRecursivo(numeros, 5);
	return 0;
}
