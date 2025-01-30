/* Se requiere el algoritmo para elaborar la plantilla de un empleado.
para ello se dispone de sus horas laborales en el mes, asi como de la
tarifa por hora */

#include<stdio.h>
#include<conio.h>

int main(){
	
	//declarando las variables
	float HL, TH, P=0;
	
	//solicitando horas laborales y la tarifa por hora
	printf("Escriba la cantidad de horas laborales por mes: ");
	scanf("%f",&HL);
	printf("Escriba la tarifa por hora: ");
	scanf("%f",&TH);
	
	//calculando la plantilla
	P = HL * TH;
	
	//mostrando la plantilla
	printf("\nLa plantilla para este mes es: %.2f",P);
	
	
	getch();
	return 0;
}
