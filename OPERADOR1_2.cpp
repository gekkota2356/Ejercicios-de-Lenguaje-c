/*
  TEMA: OPERADORES MATEMATICOS Y DE ASIGNACION
  
  EQUIPO: 5  FECHA:05/03/2024
  
  PROGRAMA: DISEÑO DE UN PROGRAMA LINEAL QUE 
  VERIFICA SI UN NUMERO ES PAR O IMPAR, UTILIZANDO ELOPERADOR MODULO %
       5%2

*/

#include <stdio.h>

int main()

{
	
	
// 1.- DECLARACION DE VARIABLE
  int a, c;
  

// 2.- LECTURA DE VARIABLE


     printf("digitar el dato de verificar, a=");
     scanf("%d", &a);
     
       const int b=2;

    
// 3.- CALULO MATEMATICO, VERIFICANDO SI ES PAR O IMPAR
  c = a%b;
  
// 4.- DESPLIEGUE DE RESULTADO
printf(" SI ENTREGA UN 1 ES IMPAR, SI ES 0 ES PAR, c= %d \n", c);


	
	
}