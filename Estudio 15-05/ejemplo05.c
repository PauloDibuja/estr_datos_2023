#include <stdio.h>

int main() {
    int x = 5;
    int *ptr = &x;
    *ptr += 2;
    printf("%d", *ptr);
    return 0;
}
