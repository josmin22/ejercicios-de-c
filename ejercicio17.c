/*Se desea leer un numero de 2 cifras y que se muestre el numero de unidades, decenas que lo componen*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	//declarando las variables 
	int num, decenas, unidades;
	
	//solicitando un numero de 2 cifras y guardandolo
	printf("Escriba un n%cmero de dos cifras: ",163);
	scanf("%d",&num);
	
	//capturando el numero que componen las unidades a traves del resto que queda al dividir numero/10
	unidades = num%10;
	
	//dividiendo el numero/10 para capturar el cociente que a su vez corresponde a las decenas
	num/=10;
	
	//guardando las decenas
	decenas = num%10;
	
	//mostrando las decenas y unidades que componen el numero
	printf("\nEl n%cmero de decenas es: %d \nEl n%cmero de unidades es: %d ",163,decenas,163,unidades);
	
	getch();
	return 0;
}
