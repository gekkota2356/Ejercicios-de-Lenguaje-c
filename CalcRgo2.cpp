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
        float Fx, X, Xi, Xf;

 // lectura del programa	
	printf("valor inicial Xi = "); 
	scanf("%f" , &Xi);
		printf("valor inicial Xf = "); 
	scanf("%f" , &Xf);
		printf("valor inicial X = "); 
	scanf("%f" , &X);
	
	printf("(X>=Xi)&&(X<=Xf) (%f>=%f)&&(%f<=%f)  %d && %d  %d \n" , X, Xi, X, Xf, (X>=Xi),  (X<=Xf), (X>=Xi)&&(X<=Xf) );
	
	//CALCULO MATEMATICO
	Fx = 3*pow(X,3)+2*sqrt(X)-(1/X);
	
//DESPLIEGUE DEL PROGRAMA
	printf("RESULTADO = %f  \n ", Fx);
	

	return 0;
		
}


