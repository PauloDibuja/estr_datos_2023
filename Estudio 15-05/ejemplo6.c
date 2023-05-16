#include <stdio.h>

void imprimirRecursivo(int *ptr, int n);

int main()
{
	int num = 1;
	imprimirRecursivo(&num, 5);
	return 0;
}

void imprimirRecursivo(int *ptr, int n) {
    if (n > 0) {
        printf("%d ", *ptr);
        (*ptr)++;
        imprimirRecursivo(ptr, n - 1);
    }
}
