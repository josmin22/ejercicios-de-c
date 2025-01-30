/*Elabora un algoritmo que solicite la edad de 2 hermanos y muestre
un mensaje indicando la edad del mayor y cuantos años de diferencia
 tiene con el menor */
 
#include<stdio.h>
#include<conio.h>

int main(){
	//declarando las variables
	int E1, E2, DE = 0;
	
	//solicitando la edad de los 2 hermanos y guardandolo
	printf("Escriba la edad del primer hermano: ");
	scanf("%d",&E1);
	printf("Escriba la edad del segundo hermano: ");
	scanf("%d",&E2);
	
	//comparando si la primera edad es mayor que la segunda
	if(E1>E2){
		
		/* en caso afirmativo, restar eda1-edad2 y mostrar en pantalla 
		que la edad de primer hermano es mayor y a la vez mostrar la diferencia
		de edad con el menor*/
		
		DE = E1 - E2;
		printf("\nEl primer hermano es mayor por %d a%cos de diferencia",DE, 164);
	} else{
		
		/* en caso negativo, restar eda2-edad1 y mostrar en pantalla 
		que la edad de segundo hermano es mayor y a la vez mostrar la diferencia
		de edad con el menor*/
		
		DE = E2 - E1;
		printf("\nEl segundo hermano es mayor por %d a%cos de diferencia",DE, 164 );
	}
	
	//evitando que el programa se cierre automaticamente
	getch();
	return 0;
}
