/* 

TEMA: I/O ,  VARIABLES
EQUIPO: 5              FECHA:04/03/2024
PROGAMA: DISENO DE UN PROGRAMA LINEAL QUE CALCULA LA LEY DE OHM EN DONDE CALCULAREMOS EL VOLTAJE DE  

*/

#include <stdio.h>

int main()

{
	// Declaracion de variable
	float I, R, V;
	
	// Lectura de datos
	printf("Digitar la corriente, V= ");
	scanf("%f", &V);
	
	printf("Digitar la corriente, R= ");
	scanf("%f", &R);
	
	//Calculo matematico
	
	I=V/R;
	
	// Despliegue de resultados
		printf("V= %f \n", I);
		
		return(0); 
		// El sistema operativo termino de programar
		
}