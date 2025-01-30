/* Se desea calcular la distancia recorrida (m) por un movil que tiene
velocidad constante (m/s) durante un tiempo T (Sg), considerar que es
on MRU (movimiento Rectilineo Uniforme) */

#include<stdio.h>
#include<conio.h>

int main(){
	//declarando las variables
	float D = 0, velocidad, tiempo;
	
	// solicitando los datos de velocidad y tiempo al usuario y guardandolos
	printf("Escriba el valor de la velocidad: ");
	scanf("%f",&velocidad);
	printf("\nEscriba el valor del tiempo: ");
	scanf("%f",&tiempo);
	
	//calculando la distancia d=v*t
	D = velocidad * tiempo;
	
	//mostrando la distancia
	printf("\nLa distancia recorrida es: %.2f m",D);
	
	getch();
	return 0;
}
