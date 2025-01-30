/*Elaborar un algoritmo que solicite 2 numeros enteros y un operador aritmetico y luego debe mostrar el resultado de la operacion orrespondiente*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	//declarando las variables
	int num1=0, num2=0;
	char operador;
	int resul, resul1, resul2, resul3;
	
	printf("Escriba el primer numero: ");
	scanf("%d",&num1);
	printf("\nEscriba el segundo numero: ");
	scanf("%d",&num2);
	
	resul = num1+num2;
	resul1 = num1-num2;
	resul2 = num1*num2;
	resul3 = pow(num1,num2);
	
	printf("\npulsa un operador: ");
	scanf("%s",&operador);
	
	switch(operador){
		case '+': printf("\nLa suma de estos numeros es: %d",resul);
				break;
		case '-': printf("\nLa resta de estos numeros es: %d",resul1);
				break;
		case '*': printf("\nEl producto de estos numeros es: %d",resul2);
				break;
		case '^': printf("\nLa division de estos numeros es: %d",resul3);
				break;
		default: printf("\nUno de los datos no se ha introducido correctamente");
				break;
	}
	
	getch();
	return 0;
}
