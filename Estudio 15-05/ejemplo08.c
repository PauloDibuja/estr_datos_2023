#include <stdio.h>

int main(){
	int i = 1, j = 1;
	while (i <= 5) {
		while (j <= i) {
			printf("%d ", j);
			j++;
		}
		i++;
		j = 1;
		printf("\n");
	}

	for (i = 5; i >= 1; i--) {
		int k = 1;
		while (k <= i) {
			printf("%d ", k);
			k++;
		}
		printf("\n");
	}
	return 0;
}