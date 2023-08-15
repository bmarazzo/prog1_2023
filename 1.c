//Crear una función que reciba dos números enteros como parámetros, realice la suma aritmética de ambos, 
//y retorne el resultado de la suma.

#include <stdio.h>

//funcion sumar dos

int suma(int n1,int n2){
	return n1+n2;   
}

int main () {
    int n1=0;
	int n2=0;
	int resu=0;

	printf("\n 1 - Ingrese un número entre 10 y 99 para realizar suma ->> ");
	scanf("%d", &n1);

	while ((n1 < 10) || (n1 > 99)){
		printf("1 - Numero invalido. Ingrese un número entre 10 y 99 para realizar suma ->> ");
		scanf("%d", &n1);
	}
	printf("\n2 - Ingrese otro número entre 10 y 99 para realizar suma ->> ");
	scanf("%d", &n2);
	while ((n2 < 10) || (n2 > 99)){
		printf("2 - Numero invalido. Ingrese un número entre 10 y 99 para realizar suma ->> ");
		scanf("%d", &n2);
	}
	resu=suma(n1,n2);
	printf("El resultado de la suma entre %i y %i y es  %i\n",n1,n2, resu);
	
}