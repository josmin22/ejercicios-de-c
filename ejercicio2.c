/* Se necesita obtener el promedio simple de un estudiante
a partir de sus tres notas parciales */

#include<stdio.h>
#include<conio.h>

int main(){
	//declarando las variables notas y promedio
	float nota1, nota2, nota3, promedio = 0;
	
	//solicitando las tres notas del estudiante al usuario y guardandolas
	printf("Escriba la primera nota: "); scanf("%f",&nota1);
	printf("\nEscriba la segunda nota: "); scanf("%f",&nota2);
	printf("\nEscriba la tercera nota: "); scanf("%f",&nota3);
	
	//calculando el promedio
	promedio = (nota1 + nota2 + nota3) / 3;
	
	
	//mostrando el promedio
	printf("\nEl promedio de las tres notas es: %.2f",promedio);
	
	getch();
	return 0;
}
