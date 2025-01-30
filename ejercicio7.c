/* Para hacer una copia de seguridad, de la informacion
almacenada en un disco duro cuya capacidad se conoce. considerar
que el disco duro esta lleno de informacion, ademas esta expresado en 
gigabyte. Un CD virgen tiene 700 Megabyte de capacidad y una Gigabyte
es igual a 1024 megabyte */

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	//declarando las variables
	float GB, MB, CD;
	
	//solicitando la capacidad del disco duro en Gigabyte
	printf("Escriba la cantidad de GB del disco: "); scanf("%f",&GB);
	
	//transformando los Gigabyte en Megabyte
	MB = GB*1024;
	
	//calculando la cantidad de CDs necesarios 
	CD = trunc((MB/700)+1);
	
	//mostrando la cantidad de CDs necesarios
	printf("\nla cantidad de CDs necesarios es: %.2f",CD);
	
	 getch();
	return 0;
}
