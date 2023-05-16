#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n = 6;
    printf("El %d-ésimo número de la serie de Fibonacci es: %d\n", n, fibonacci(n));
    return 0;
}
