/* Elabore un algoritmo que lea los 3 lados de un triangulo
cualquiera y calcule su area, considerar: Si A,B,C son los lados
y S el semiperimetro. */

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	//declarando las variables
	int LA, LB, LC;
	float AT = 0,LS=0;
	
	//solicitando los tres lados y guardandolos
	printf("Escribe el valor del lado A: ");   scanf("%d",&LA);
	printf("\nEscribe el valor del lado B: "); scanf("%d",&LB);
	printf("\nEscribe el valor del lado C: "); scanf("%d",&LC);
	
	//calculando la logitud del semiperimetro
	LS = (LA + LB + LC)/2;
	
	//calculando el area del triangulo
	AT = sqrt(LS*(LS-LA)*(LS-LB)*(LS-LC));
	
	//mostrando el area del triangulo
	printf("\nEl area total es: %.2f",AT); 
	
	getch();
	return 0;
}
