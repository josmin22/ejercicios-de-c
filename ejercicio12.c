/* Elabora un algoritmo para leer 3 números enteros difentes entre sí, y determina el numero mayor de los tres */

#include<stdio.h>
#include<conio.h>

int main(){
	
	//declarando las variables para los 3 numeros
	int num1, num2, num3;
	
	//solicitando los tres numeros y guardandolos
	printf("Escriba el primer numero: ");
	scanf("%d",&num1);
	printf("Escriba el segundo numero: ");
	scanf("%d",&num2);
	printf("Escriba el tercer numero: ");
	scanf("%d",&num3);
	
	//comparando si N1 es mayor que N2 y N3, en caso afirmativo, pues el mayor es N1
	if((num1>num2)&&(num1>num3)){
		printf("\nEl numero mayor es: %d ",num1);
	} 
	//comparando si N2 es mayor que N3, en caso afirmativo, pues el mayor es N3
	else if(num2>num3){
		printf("\nEl numero mayor es: %d ",num2);
	} 
	//en caso que las 2 condiciones anteriores no se cumplan pues N3 es el mayor
	else{
		printf("\nEl numero mayor es: %d ",num3);
	}
	
	
	getch();
	return 0;
}
