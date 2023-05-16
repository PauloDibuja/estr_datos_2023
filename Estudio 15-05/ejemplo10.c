#include <stdio.h>

void modificarPuntero(int **ptr) {
    int num = 10;
    *ptr = &num;
}

int main() {
    int *puntero = NULL;
    modificarPuntero(&puntero);
    printf("%d\n", *puntero);
    return 0;
}
