/*Elabore un algoritmo que permita ingresar el monto de venta alcanzado por un vendedor durante el mes, luego calcular la 
 la bonificacion que le corresponde sabiendo
 a) de 0 a 1000 le corresponde 0 bonificaciones
 b) de 1000 a 5000 le corresponde 3 bonificaciones
 c) de 5000 a 20000 le corresponde 5 bonificaciones
 d) de 20000 a más le corresponde 0 bonificaciones */
 
#include<stdio.h>
#include<conio.h>

int main(){
	
	//declaranndo las variables
	int mv; float tb;
	
	//solicitando el monto del vendedor por mes y guardandolo
	printf("Dame el monto de venta del vendedor este mes: ");
	scanf("%d",&mv);
	
	//comparando y calculando cada posible caso
	if(mv>=0 && mv<1000){
		tb = (0*mv)/100;
		
	} else if(mv>=1000 && mv<5000){
		tb = (float)(3*mv)/100;
		
	} else if(mv>5000 && mv<20000){
		tb = (float)(5*mv)/100;
		
	} else if(mv>=2000){
		tb = (float)(8*mv)/100;
	} 

	
	printf("\nsu bonificacion es de: %.2f",tb);
	
	getch();
	return 0;
}
