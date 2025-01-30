/*Elaborar un algoritmo que permita mostrar el sueldo promedio de un grupo de empleados.*/

#include<stdio.h>
#include<conio.h>

int main(){
	//declarando las variables
	int Ne;
	float Sp =0, Se, Ss;
	int i=0;
	
	//solicitando el numero de empleados
	printf("Dime el n%cmero de empleados: ",163);
	scanf("%d",&Ne);
	
	//repetir hasta que el iterador sea menor al numero de empleados
	while(i<Ne){
		//solicitando el sueldo del empleado correspondiente y guardandolo
		printf("\nEscriba el sueldo del empleado %d: ",i+1);
		scanf("%f",&Se);
		
		//haciendo un suma iterativa de los sueldos de los empleados
		Ss+=Se;
		
		//incrementando el iterador de 1 en 1
		i++;
	}
	//calculando el sueldo promedio de los empleados
	Sp = (float)Ss/Ne;
	
	//mostrando el sueldo promedio de los empleados
	printf("\nEl sueldo promedio de los empleados es: %.2f",Sp);
	
	getch();
	return 0;
}
