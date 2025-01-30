/*Elabore un algoritmo que solicite un numero entero y muestre un mensaje indicando la vocal correspondiente, considerando que la vocal A = 1*/

#include<stdio.h>
#include<conio.h>

int main(){
	//declarando la variable
	int num;
	
	//solicitando el numero al usuario y guardandolo
	printf("Escriba un numero del [1-5], para que te diga el vocal corrrespondiente: ");
	scanf("%d",&num);
	
	//comparando cada caso y mostrando un mensaje segun el numero que corresponde cada vocal
	switch(num){
		case 1: printf("\nLa vocal correspondiente es: \"A\"");
				break;
		case 2: printf("\nLa vocal correspondiente es: \"E\"");
				break;
		case 3: printf("\nLa vocal correspondiente es: \"I\"");
				break;
		case 4: printf("\nLa vocal correspondiente es: \"O\"");
				break;
		case 5: printf("\nLa vocal correspondiente es: \"U\"");
				break;
		default: printf("\nEl valor es incorrecto, no corresponde a ninguna vocal");
				break;
	}		
	
	
	getch();
	return 0;
}
