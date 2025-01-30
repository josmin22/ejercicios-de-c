/*Elabore un algoritmo que muestre los terrminos de la serie de fibonacci que sean menores a 100000*/

#include<stdio.h>
#include<conio.h>

int main(){
	//declarando las variables
	int i, x=0, y=1, z=1;
	
	//repetir siempre que z sea menor a 100000 e incrementar el iterador de 1 en 1
	for(i=1; z<100000; i++){
		//mostrar el valor actual de z
		printf("%d, ",z);
		z=x+y;
		x=y;
		y=z;
	}
	
	getch();
	return 0;
}
