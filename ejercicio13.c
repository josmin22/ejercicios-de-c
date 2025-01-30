/* Elabora un algoritmo que sirva para indentificar el tipo de triángulo
 conociendo sus tres lados. */

#include<stdio.h>
#include<conio.h>

int main(){
	
	//declarando las variables
	int lado1, lado2, lado3;
	
	//solicitando los valores de los lados del triangulo y guardandolos
	printf("Escriba el valor del lado 1: ");
	scanf("%d",&lado1);
	printf("\nEscriba el valor del lado 2: ");
	scanf("%d",&lado2);
	printf("\nEscriba el valor del lado 3: ");
	scanf("%d",&lado3);
	
	
	//comparando si los tres lados son diferntes, en caso afirmativo es escaleno
	if((lado1!=lado2)&&(lado2!=lado3)&&(lado3!=lado1)){
		
		printf("\nEs un triangulo escaleno");	
		
	}
	
	//comparando si los tres lados son iguales, en caso afirmativo es equilatero
	 else if((lado1==lado2)&&(lado2==lado3)){
		
		printf("\nEs un triangulo equilatero");
		
	} 
	//en caso de no cumplir las 2 condiciones anteriores, es decir que hay 2 lados que son iguales, por lo tanto, isosceles
	else{
		printf("\nEs un triangulo isosceles");
	}
	
	getch();
	return 0;
}
