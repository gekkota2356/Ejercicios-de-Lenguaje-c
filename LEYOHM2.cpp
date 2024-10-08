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
	printf("Digitar la corriente, I= ");
	scanf("%f", &I);
	
	printf("Digitar la corriente, R= ");
	scanf("%f", &R);
	
	//Calculo matematico
	
	V=I*R;
	
	// Despliegue de resultados
		printf("V= %f \n", V);
		
		return(0); 
		// El sistema operativo termino de programar
		
}