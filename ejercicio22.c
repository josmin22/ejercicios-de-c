/* Elaborar un algoritmo que solicite 2 numeros enteros
y muestre su producto por el metodo de sumas sucecivas*/

#include<stdio.h>
#include<conio.h>

int main(){
	int num1, num2, pr = 0;   //declarando las variables
	printf("Escriba el primer numero: ");  //solicitando el primer numero al usuario
	scanf("%d",&num1); //guardando el primer numero
	
	printf("\nEscriba el segundo numero: "); //solicitando el segundo numero
	scanf("%d",&num2);  //guardando el segundo numero
	
	int i; //declarando el contador o el iterador
	for(i=1; i<=num2; i++){
		pr+=num1;  //haciendo la suma sucesiva y guardandolo
		
		printf("%d",num1); //muestrando la operacion
		
		if(i==1 || i<num2){
			printf(" + ");
		}
	}
	printf("\nEl resultado final es: %d",pr);
	

	
	
	getch();
	return 0;
}
