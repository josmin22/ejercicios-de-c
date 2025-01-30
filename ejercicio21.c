/*Elaborar un algoritmo que solicite la edad de 200 personas y que muestre cuantos son mayores de edad y menores de edad hay*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//declarando las variables
	int edadP, mayorE = 0, menorE = 0;
	int i;
	
	//repetir siempre que el iterador sea menor a 200 e incrementar el iterador de 1 en 1
	for(i = 0; i<200; i++){
		//solicitar la edad de la persona correspondiente y guardandolo
		printf("Escriba la edad de la persona %d: ",i+1);
		scanf("%d",&edadP);
		
		//comparando si la edad ingresada es mayor a 17, en caso de sí, se le suma 1 a mayor
		if(edadP>17){
			mayorE++;
		} 
		//si la edad ingresada no es mayor a 17 se le suma 1 a menor
		else{
			menorE++;
		}
	}
	//mostrando la cantidad de personas mayores y menores
	printf("\nHay %d personas que son mayores de edad",mayorE);
	printf("\nHay %d personas que son menores de edad",menorE);
	
	getch();
	return 0;
}
