/*Se tien registrado la producción (unidades) logradas por un operario
a lo largo de la semana (lunes a sábado). Elabora un algoritmo que nos muestre
o nos diga si el operario recibirá incentivos sabiendo que el promedio de producción
mínima es de 100 unidades.*/

#include<stdio.h>
#include<conio.h>

int main(){
	//declarando la variables
	int pl, pm, px, pj, pv, ps, pt=0, pp=0;
	
	//solicitando la producción por cada dia de la semana y guardándolo
	printf("Dame la producci%cn de lunes: ",162);
	scanf("%d",&pl);
	printf("\nDame la producci%cn de martes: ",162);
	scanf("%d",&pm);
	printf("\nDame la producci%cn de miercoles: ",162);
	scanf("%d",&px);
	printf("\nDame la producci%cn de jueves: ",162);
	scanf("%d",&pv);
	printf("\nDame la producci%cn de viernes: ",162);
	scanf("%d",&pv);
	printf("\nDame la producci%cn de s%cbado: ",162, 160);
	scanf("%d",&ps);
	
	//calculando la producción total
	pt = (pl+pm+px+pj+pv+ps);
	
	//calculando el promedio de la producción
	pp = pt/6;
	
	//comparando si el promedio es mayor o igual a 100 para recibir incentivos
	if(pp>=100){
		//en caso de sí, mostrar en pantalla que recibirá incentivos
		printf("\n\"Recibir%c incentivos\"",160);
	} else{
		//en caso de no, mostrar en pantalla que no recibirá incentivos
		printf("\n\"No recibir%c incentivos\"",160);
	}
	
	
	getch();
	return 0;
}
