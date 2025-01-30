/* Elabore un algoritmo que permita averiguar si una persona debe sacar
su CUIL, sabiendo su año de nacimiento. El codigo unico de identificacion laboral
(CUIL) es el numero que se otorga a todo trabajador al inicio de su actividad
laboral en relacion de dependencia (mayores de 17 años) que pertenezca al 
sistema integrado de jubilaciones y pensiones (SIJP), y a toda otra
persona que gestione alguna prestacion o servicio de la seguridad social
en la Republica Argentina */

#include<stdio.h>
#include<conio.h>


int main(){
	//declarando las variables
	int AA, AN, E = 0;
	
	printf("\n\tDiga su a%co de nacimiento: ",164); scanf("%d",&AN);
	printf("\n\tEscriba el a%co actual: ",164); scanf("%d",&AA);
	
		E = AA - AN;
		
		//comparando si la edad del trabajador es mayor a 17
		if(E>17){
		
		//mostrando que debe solicitar su CUIL en caso de ser mayor a 17 años	
		printf("\n\tDebe solicitar su CUIL");
		
		} else{	
		
		////mostrando que no debe solicitar su CUIL en caso de ser menor a 17 años
		printf("\n\tNo debe solicitar su CUIL aun");
		
		}

	
	getch();
	return 0;
}
