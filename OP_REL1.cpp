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
		system("color 20");
	// Declaracion de variables
	
	int A, B, C=100;

	// Lectura de variables
	printf("Escribe el valor de A = ");
	scanf("%d", &A );
	printf("Escribe el valor de B = ");
	scanf("%d", &B );
	

	
	// Calculos Matematicos
	
	// Despliegue del programa
		printf("El valor de %d < %d entrega %d \n ", A, B, A<B);
		
			printf("El valor de %d > %d entrega %d \n ", A, B, A>B);
	
	printf("El valor de %d <= %d entrega %d \n ", A, B, A<=B);
	
			printf("El valor de %d >= %d entrega %d \n ", A, B, A>=B);
			
		printf("El valor de %d == %d entrega %d \n ", A, B, A==B);
		
			printf("El valor de %d != %d entrega %d \n ", A, B, A!=B);
			
			
			
			
			// Otro algoritmo
			
				printf("El valor de %d < %d entrega %d \n ", A, C, A<C);
		
			printf("El valor de %d > %d entrega %d \n ", C, B, C>B);
	
	printf("El valor de %d <= %d entrega %d \n ", C+A, B, C+A<=B);
	
			printf("El valor de %d >= %d entrega %d \n ", A, B-C, A>=B-C);
			
		printf("El valor de %d == %d entrega %d \n ", C*A, B, C*A==B);
		
			printf("El valor de %d != %d entrega %d \n ", A, B-(2*C), A!=B-(2*C));
			
}