/*
  TEMA: OPERADORES MATEMATICOS Y DE ASIGNACION
  
  EQUIPO: 5  FECHA:05/03/2024
  
  PROGRAMA: DISEÑO DE UN PROGRAMA LINEAL QUE VERIFICA A A LOS OPERADORES MATEMATICOS Y DE ASIGNACION

*/

#include <stdio.h>

int main()

{
	
	
// 1.- DECLARACION DE VARIABLE
  int a, b, c;

// 2.- LECTURA DE VARIABLE


     printf("digitar el valor de a=");
     scanf("%d", &a);
     
     
     printf("digitar el valor de b=");
     scanf("%d", &b);
     
     
     
// 3.- CALULO MATEMATICO
  c = a*b;
// 4.- DESPLIEGUE DE RESULTADO
printf(" c= %d \n", c);

// 3.- CALULO MATEMATICO
  c = a-b;
// 4.- DESPLIEGUE DE RESULTADO
printf(" c= %d \n", c);

// 3.- CALULO MATEMATICO
  c = a/b;
// 4.- DESPLIEGUE DE RESULTADO
printf(" c= %d \n", c);

// 3.- CALULO MATEMATICO
  c = a+b;
// 4.- DESPLIEGUE DE RESULTADO
printf(" c= %d \n", c);

	
	
}