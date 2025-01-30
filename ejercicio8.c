/* Se tiene los puntos A y B en el cuadrante positvo del plano cartesiano,
elabore el algorimto que permite obtener la distancia entre A y B */

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	//declarando las variables necesarias
	float AA, AB, OA, OB, D = 0;
	
	//solicitando las abcisas y las ordenadas de los puntos
	printf("Escribe la abcisa A: ");
	scanf("%f",&AA);
	printf("\nEscribe la abcisa B: ");
	scanf("%f",&AB);
	printf("\nEscribe la ordenada A: ");
	scanf("%f",&OA);
	printf("\nEscribe la ordenada B: ");
	scanf("%f",&OB);
	
	//calculando la distancia entre A y B
	D = sqrt(pow((AB-AA),2) + pow((OB-OA),2));
	
	//mostrando la distancia
	printf("\nLa distancia entre los puntos A y B es: %.2f",D);
	
	getch();
	return 0;
}
