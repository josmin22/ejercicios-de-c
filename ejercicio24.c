/*Elabore un algoritmo que muestre los terminos de la serie
que sea menores que 1000
	1,2,5,26,...*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	//declarando la variable serie e inicializadola en 1
	int serie=1;
	
	//repetir siempre que la serie sea menor a 1000
	while(serie<1000){
		//mostrar la serie en pantalla
		printf("%d, ",serie);
		
		//elevando el valor actual al cuadrado y suma a 1
		serie = pow(serie,2) + 1;
	}

	
	getch();
	return 0;
}
