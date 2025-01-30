/*Elaborar un algoritmo que solicite 2 numeros y muestre el promedio de ambos*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int num1, num2;
	float prom=0;
	
	printf("Escriba un numero: ");
	scanf("%d",&num1);
	printf("\nEscriba otro numero: ");
	scanf("%d",&num2);
	
	prom = (float)(num1 + num2)/2;
	printf("\nEl promedio de estos numeros es: %.2f\n",prom);
	
	
	system("pause");
	return 0;
}
