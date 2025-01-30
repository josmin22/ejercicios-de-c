/* Elaborar un algoritmo que solicite el numero de respuestas correctas, incorrectas,
y en blanco, correspondientes a postulantes, y muestre su puntaje final considerando
que por cada respuesta correcta tendra 4 puntos, respuestas incorrectas tendra -1
y respuestas en blanco tendra 0. */

#include<stdio.h>
#include<conio.h>

int main(){
	//declarando las variables
	int RC, RI, RB, PRC = 0, PRI = 0, PRB = 0, PF =0;
	
	//solictando el numero de respuestas correctas y guardandolo
	printf("\nEscriba el n%cmero de respuestas correctas: ", 163); scanf("%d",&RC);
	
	//solictando el numero de respuestas incorrectas y guardandolo
	printf("\nEscriba el n%cmero de respuestas incorrectas: ", 163); scanf("%d",&RI);
	
	//solictando el numero de respuestas en blanco y guardandolo
	printf("\nEscriba el n%cmero de respuestas en blanco: ", 163); scanf("%d",&RB);
	
	//calculando los puntos por categoria de respuesta
	PRC = RC*4; PRI = RI*-1; PRB = RB *0;
	
	//calculando el puntaje final
	PF = PRC + PRI + PRB;
	
	//mostrando el puntaje final
	printf("\nEl puntaje final es : %d " ,PF);
	
	getch();
	return 0;
}
