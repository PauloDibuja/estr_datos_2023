#include <stdio.h>

void reordenarPunteros(int **ptr1, int **ptr2, int **ptr3) {
    int *temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = *ptr3;
    *ptr3 = temp;
}

int main() {
    int num1 = 1, num2 = 2, num3 = 3;
    int *p1 = &num1, *p2 = &num2, *p3 = &num3;
    
    reordenarPunteros(&p1, &p2, &p3);
    
    printf("%d %d %d\n", *p1, *p2, *p3);
    
    return 0;
}
