/*Elabore un algoritmo que permita ingresar un numero entero
diferente a cero y muestre sus divisores*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int num, i=1; //declarando las variables
	
	printf("digite un numero: "); //solicitando el numero al usuario
	scanf("%d",&num);    //guardando el numero
	
	//sacando los divisores del numero
	do{
		if(num%i==0){
			printf("%d, ",i);
		}
		i++;
	}while((num!=0)&&(i<=num));
	
	printf("\n\n");
	
	system("pause");
	return 0;
}
