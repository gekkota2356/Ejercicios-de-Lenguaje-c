/*

TEMA: OPERADORES RELACIONALES O DE COMPARACION
 
GRUPO:05     FECHA:14/03/2024

PROGRAMA: DISEÑO DE UN PROGRAMA LINEAL QUE REALIZA LOS CALCULOS CON OPERADORES RELACIONALES,
UTILIZANDO VARIABLES ENTERAS Y FLOTANTES

*/

//Librerias
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Funcion principal
int main()
{
	// Da estilo o color al programa
		system("color 20");
		
		
	// Declaracion de variables
	
	float A, B, C=100;

	// Lectura de variables
	printf("Indica el valor inicial del rango= ");
	scanf("%f", &A );
	printf("Indica el valor Final del rango = ");
	scanf("%f", &B );
	printf("Indica el valor a cacular = ");
	scanf("%f", &C );
	
	// Despliegue del programa
		printf(" %.1f>=%.1f  &&  %.1f>=%.1f   \n", C, A, C, B );
		printf(" %d  &&  %d   \n", C>=A, C<=B);
		printf("  %d     \n", (C>=A) && (C<=B));
			
}