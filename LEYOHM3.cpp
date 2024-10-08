/* 

TEMA: I/O ,  VARIABLES
EQUIPO: 5              FECHA:04/03/2024
PROGAMA: DISEÑO DE UN PROGRAMA LINEAL QUE CALCULA LA LEY DE OHM EN DONDE CALCULAREMOS EL VOLTAJE DE  

*/

#include <stdio.h>

int main()

{
	// Declaracion de variable
	float I, R, V;
	
	// Lectura de datos
	printf("Digitar la corriente, V= ");
	scanf("%f", &V);
	
	printf("Digitar la corriente, I= ");
	scanf("%f", &I);
	
	//Calculo matematico
	
	R=V/I;
	
	// Despliegue de resultados
		printf("V= %f \n", R);
		
		return(0); 
		// El sistema operativo termino de programar
		
}