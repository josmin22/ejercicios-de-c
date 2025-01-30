/*Elabore un algoritmo que contenga los numeros pares del1 al 10*/

#include<stdio.h>
#include<conio.h>

int main(){
	//delarando la variable e inicializandolo en 2
	int numero =2;
	
	//repetir hasta que la variable se menor o igual a 10
	while(numero<=10){
		
		//mostrando el valor actual de la varial en pantall
		printf("%d\n",numero);
		
		//incrementando el numero de 2 en 2
		numero+=2;
	}
	
	getch();
	return 0;
}
