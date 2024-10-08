/*
  TEMA:OPERADORES DE RELACION O COMPARACION
  
  EQUIPO: 05   FECHA:15/03/2024
  
  PROGRAMA:DISEÑO DE UN PROGRAMA LINEAL QUE CALCULA UNA ECUACION CON DATO x DENTRO RANGO [xi , xf]
*/


//librerias
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


//funcion principal

int main()

{
	// Da estilo o color al programa
		system("color 20");
		
//DECLARACION DE VARIABLES
        float Fx, X ;

 // lectura del programa	

		printf("valor inicial X = "); 
	scanf("%f" , &X);
	
	//CALCULO MATEMATICO
	Fx = ( X>0 )? 3*pow(X,3)+2*sqrt(X)-(1/X) : -9999 ;
	
//DESPLIEGUE DEL PROGRAMA
	( X>0)? printf("RESULTADO = %f  \n ", Fx): printf("se indetermina");

	return 0;
		
}


