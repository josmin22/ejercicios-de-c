/*Elabora un algoritmo que solicite un numero entero y muestre el nombre del mes correspondiente. Ejemplo: Enero = 1 */
#include<stdio.h>
#include<conio.h>

int main(){
	
	int numero;
	printf("Intruzca un numero para ver su mes correspondiente: ");
	scanf("%d",&numero);
	
	switch(numero){
	
	 case 1: printf("\nEl mes que le corresponde a este numero es ENERO");
	 				break;
	 case 2: printf("\nEl mes que le corresponde a este numero es FEBRERO");
	 				break;
	 case 3: printf("\nEl mes que le corresponde a este numero es MARZO");
	 				break;
	 case 4: printf("\nEl mes que le corresponde a este numero es ABRIL");
	 				break;
	 case 5: printf("\nEl mes que le corresponde a este numero es MAYO");
	 				break;
	 case 6: printf("\nEl mes que le corresponde a este numero es JUNIO");
	 				break;
	 case 7: printf("\nEl mes que le corresponde a este numero es JULIO");
	 				break;
	 case 8: printf("\nEl mes que le corresponde a este numero es AGOSTO");
	 				break;
	 case 9: printf("\nEl mes que le corresponde a este numero es SEPTIEMBRE");
	 				break;
	 case 10: printf("\nEl mes que le corresponde a este numero es OCTUBRE");
	 					break;
	 case 11: printf("\nEl mes que le corresponde a este numero es NOVIEMBRE");
	 			break;
	 case 12: printf("\nEl mes que le corresponde a este numero es DICIEMBRE");
	 				break;
	default :printf("\nEste numero no le corresponde a ningun mes");
	 				break;
}
	
	return 0;
}
