/*Elaborar un algoritmo que solicite ingresar letras hasta que este 
ingrese una vocal*/

#include<stdio.h>
#include<conio.h>

int main(){
	//declarando la variable
	char letra;
	char band = 'V';
	
	//repetir siempre band se V
	while(band == 'V'){
		//solicitando una letra y guardandolo
		printf("Escriba una letra: ");
		scanf("%s",&letra);
		fflush(stdin);//vaciando el bafle
		
		//comparando si la es una vocal, en caso afirmativo band cambiara a F
		switch(letra){
			case 'A' : band = 'F';
					
			case 'E' : band = 'F';
					
			case 'I' : band = 'F';
					
			case 'O' : band = 'F';
					
			case 'U' : band = 'F';
					
			case 'a' : band = 'F';
					
			case 'e' : band = 'F';
					
			case 'i' : band = 'F';
					
			case 'o' : band = 'F';
					
			case 'u' : band = 'F';
					printf("\nPrograma finalizado por que has escrito una vocal");
					break;
			
			default: band = 'V';
					break;
		}
		
	}
	
	getch();
	return 0;
	
}
