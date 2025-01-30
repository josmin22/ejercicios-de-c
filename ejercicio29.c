/*Elaborar un algoritmo para obtener el resultado del escrutinio en las elecciones del delegado del colegio, considerar que hay 160
electores y se han presentado 3 candidatoas, todos votaron, el algoritmo de declarar al por mayoria simple.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main(){
	int can1=0, can2=0, can3=0, vb;
	int i=1, opc;
	char resp;
	
	
	do{
	printf("\t\n\n");
    printf("\t************************************************");
	printf("\n\t*\t   Bienvenido estimado votante \t       *\n");
	printf("\t*                                              *\n");
	printf("\t************************************************\n");
		fflush(stdin);
	printf("\t************************************************\n");
	printf("\t*        PULSE:                                *\n");
	printf("\t*                                              *\n");
	printf("\t*\t1. Para votar al candidato N%c 1        *",167);
	printf("\n\t*\t2. Para votar al candidato N%c 2        *",167);
	printf("\n\t*\t3. Para votar al candidato N%c 3        *",167);
	printf("\n\t*\t4. Para voto en blanco.\t               *");
	printf("\n\t*\t5. Para salir.        \t \t       *");
	printf("\n\t*                                              *");
	printf("\n\t************************************************\n");
	printf("\n\tIngrese el valor aqui: ");
	scanf("%d",&opc);
	system("cls");
	
	 
	switch(opc){
		fflush(stdin);
		case 1: can1+=1;printf("\nHas votado por el candidato 1\n\n"); break;
		case 2: can2+=1;printf("\nHas votado por el candidato 2\n\n"); break;
		case 3: can3+=1;printf("\nHas votado por el candidato 3\n\n"); break;
		case 4: vb+=1;printf("\nHas votado en blanco\n"); break;
		case 5: break;	
		getch();	 	
				 
	}
	i++;
	printf("quieres seguir con las elecciones? (s/n): ");
	resp = getch();
	printf("\n");
 }while((opc!=5) && ((resp=='s')||(resp=='S')) && (i<=160) );
  
  
  printf("\n\nEl candidato 1 ha obtenido: %d votos",can1);
  printf("\nEl candidato 2 ha obtenido: %d votos",can2);
  printf("\nEl candidato 3 ha obtenido: %d votos\n",can3);
  
 
  
  	if((can1>can2)&&(can1>can3)){
  		printf("\nEl ganador es el candidato 1 por %d votos\n\n",can1);
  	} else if((can2>can3)&&(can2>can1)){
  		printf("\nEl ganador es el candidato 2 por %d votos\n\n",can2);
  	} else if((can3>can2)&&(can3>can1)){
  		printf("\nEl ganador es el candidato 3 por %d votos\n\n",can3);
  	}else{
  		
  		if((can1==can2)&&(can1!=can3)){
	printf("\nHay un empate entre candidato 1 y candidato 2\n\n");
		} else if((can1==can3)&&(can1!=can2)){
	printf("\nHay un empate entre candidato 1 y candidato 3\n\n");	
		} else if((can2==can3)&&(can2!=can1)){
	printf("\nHay un empate entre candidato 2 y candidato 3\n\n");
		} else{
	printf("\nHay un empate entre los 3 candidatos\n\n");
		}	
  	}
  	
	
  system("pause");
  return 0;
}
