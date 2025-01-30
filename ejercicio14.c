/*Elaborar un algoritmo que permita ingresar un numero enterto (1 a 10), y
muestre su equivalente en romano*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	//declarando la variable
	int num;
	
	
	
		//solicitando al usuario que digite un numero y guardandolo
		printf("Escriba un n%cmero del 1 a 10: ",163);
		scanf("%d",&num);
		
		//comparando el numero en cada caso, y que escriba el equivalente que corresponda o no si es que no correesponde
		switch(num){
			case 1: printf("\nSu equivalente en n%cmeros romanos es: I",163);
				break;
			case 2: printf("\nSu equivalente en n%cmeros romanos es: II",163);
				break;
			case 3: printf("\nSu equivalente en n%cmeros romanos es: III",163);
				break;
			case 4: printf("\nSu equivalente en n%cmeros romanos es: IV",163);
				break;
			case 5: printf("\nSu equivalente en n%cmeros romanos es: V",163);
				break;
			case 6: printf("\nSu equivalente en n%cmeros romanos es: VI",163);
				break;
			case 7: printf("\nSu equivalente en n%cmeros romanos es: VII",163);
				break;
			case 8: printf("\nSu equivalente en n%cmeros romanos es: VIII",163);
				break;
			case 9: printf("\nSu equivalente en n%cmeros romanos es: IX",163);
				break;
			case 10: printf("\nSu equivalente en n%cmeros romanos es: X",163);
				break;
			default: printf("\nEste n%cmero no est%c en el rango que le he pedido, vuelva a intentarlo\n",163,160);
				break;
		}
	
	
	getch();
	return 0;
}
