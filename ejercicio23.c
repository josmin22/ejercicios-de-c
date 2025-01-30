/*Elaborar un algoritmo que muestre 10 numeros enteros 
a partir de 1 excepto los pares*/

#include<stdio.h>
#include<conio.h>

int main(){
	int i =0, conteo=1; //declarando las variables e iniciandolas
	
	while(i<10){
		printf("%d",conteo); //imprimiendo los numeros
		if(i<9){
			printf(", ");
		}
		conteo+=2; //haciendo que el numero anterior se sume  + 2
		i++; //incrementando el iterador
	}
	
	getch();
	return 0;
}
