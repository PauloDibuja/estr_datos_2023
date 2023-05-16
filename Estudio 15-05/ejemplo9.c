#include <stdio.h>
#include <string.h>

void cambiarPosicion(char *str, int pos1, int pos2) {
    char temp = str[pos1];
    str[pos1] = str[pos2];
    str[pos2] = temp;
}

void permutarString(char *str, int l, int r) {
    if (l == r) {
        printf("%s\n", str);
    } else {
        for (int i = l; i <= r; i++) {
            cambiarPosicion(str, l, i);
            permutarString(str, l + 1, r);
            cambiarPosicion(str, l, i); // Restaurar el orden original para la próxima iteración
        }
    }
}

int main() {
    char palabra[] = "ABC";
    int longitud = strlen(palabra);
    permutarString(palabra, 0, longitud - 1);
    return 0;
}
