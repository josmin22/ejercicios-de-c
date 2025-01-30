/*Elabore un algoritmo que solicite un numero entero y diferente de cero, e indique si par*/

#include<stdio.h>
#include<conio.h>

int main(){
	//declarando la variable
	int numero;
	
	//solicitando el numero y guardandolo
	printf("Escriba un numero entero y distinto de cero: ");
	scanf("%d",&numero);
	
	//comparando si el numero ingresado es igual a 0, en caso afirmativo, mostrar un mensaje que recuerde al usuario la condicion
	if(numero==0){
		printf("\nEl numero es cero, se le ha pedido un numero numero distinto de Cero");
	} 
	//comparando si el numero deja resto 0 cuando se divide por, en caso afirmativo es un numero par y mostrar mensaje en pantalla
	else if(numero%2==0){
		printf("\n%d Es un numero par",numero);
	} 
	//si no se cumple las dos condiciones anteriores, es un numero impar y mostrar mensaje en pantalla
	else{
		printf("\n%d es un numero impar",numero);
	}
	
	
	getch();
	return 0;
}
