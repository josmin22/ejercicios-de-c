/*Elaborar un algoritmo que permita ingresar 10 letras cualquiera, y luego nos indiqueal final
cuantas vocales y consonantes se ingresaron */

#include<stdio.h>
#include<conio.h>

int main(){
	char letra;
	int nv=0, nc=0, i;
	
	i=0;
	while(i<10){
		printf("Escriba una letra: ");
		fflush(stdin);
		scanf("%c",&letra);
		switch(letra){
			case 'a': nv++;
				break;
			case 'e': nv++;
				break;
			case 'i': nv++;
				break;
			case 'o': nv++;
				break;
			case 'u': nv++;
				break;
			case 'A': nv++;
				break;
			case 'E': nv++;
				break;
			case 'I': nv++;
				break;
			case 'O': nv++;
				break;
			case 'U': nv++;
				break;
			default: nc++;
				break;
			
		}
		
		i++;
	}
	
	printf("\nHas ingresado %d vocales",nv);
	printf("\nHas ingresado %d consonantes",nc);
	getch();
	return 0;
}
