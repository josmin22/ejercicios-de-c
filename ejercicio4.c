/* Elaborar un algoritmo que permita ingresar el numero partidos
ganados, perdidos y empatados, por algun equipo en el torneo apertura,
se debe de mostrar su puntaje total, teniendo en cuenta que por cada partido ganado
obtendra 3 puntos, empatados 1 punto perdido 0 puntos */

#include<stdio.h>
#include<conio.h>

int main(){
	//declando variables
	int PG, PP, PE, PPE, PPG, PT=0;
	
	//solicitando el numero de partidos ganados y guardandolo
	printf("introduzca el n%cmero de partidos ganados: ", 163);
	scanf("%d",&PG);
	
	//solicitando el numero de partidos empatados y guardandolo
	printf("\nintroduzca el n%cmero de partidos empatados: ", 163);
	scanf("%d",&PE);
	
	//solicitando el numero de partidoas perdidos y guardandolo
	printf("\nintroduzca el n%cmero de partidos perdidos: ", 163);
	scanf("%d",&PP);
	
	//calculando el puntaje de partidos ganados
	PPG=PG*3;
	
	//calculando el puntaje de partidos empatados
	PPE=PE*1;
	
	//calculando el puntaje total
	PT = PPG + PPE;
	
	//mostrando el puntaje total
	printf("\nEl puntaje total es: %d ",PT);
	
	
	getch();
	return 0;
}
