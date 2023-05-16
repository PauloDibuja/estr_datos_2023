#include <stdio.h>

/*
	Programado por Paulo Lara (PauloDibuja)
	Ingeniería Civil Informática
	Mayo - 2023

	NOTA: La resolución de la complejidad de cada función está en la pizarra virtual.
*/

int maximoIterativo(int *arr, int size);
int maximoRecursivo(int *arr, int size);

int main(){

	// Aquí editan el array, agregan o eliminan enteros.
	int arr[] = {12, 32, 43, 54, 576, 45658, 980};
	//Asegurense de que cambiar tambien el tamaño del array de ser necesario.
	int size = 7;
	printf("El valor mas alto en el array es de: %d (Iterativo)\n",  maximoIterativo(arr, size));
	printf("El valor mas alto en el array es de: %d (Recursivo)\n",  maximoRecursivo(arr, size));
	return 0;
}

int maximoIterativo(int *arr, int size){
	int max = arr[0];
	int i;
	// Recorre el array
	for(i = 0; i < size; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}
int maximoRecursivo(int *arr, int size){
	if (size == 0){ 		// Caso Base 1: El array está vacío
		return 0;
	} else if (size == 1){	// Caso Base 2: El array solo tiene un elemento
		return arr[0];
	}else{
		int max = maximoRecursivo(arr + 1, size - 1); 
		/* Disminuyes el tamaño del array y encuentras máximos hasta que quede solo un elemento */
		if(arr[0] > max){
			return arr[0];			
		}
		return max;
	}
}
