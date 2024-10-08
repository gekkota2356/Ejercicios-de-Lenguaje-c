/*
TEMA: ECUACIONES MATEMATICAS USANDO OPERADORES MATEMATICOS Y FUNCIONES DE LA LIBRERIA math.h   
                                                                                                                  
                                                                                                                 
EQUIPO: 05   FECHA:11/3/2024                                                                               


priogamaPROGRAMA:Diseño de un programa lineal que realiza el calculo del area de diferentes triangulos        
                                                                                                             
                                                                                                                 
*/                                                             

#include <stdio.h>
#include <math.h>

int main()

{
// 1. DECLARACION DE VARIABLE
 float a, b, Area;

// 2. LECTURA DE DATOS
  printf("digita el lado a del tirangulo: ");
  scanf("%f", &a);
  

// 3. CALCULO MATEMATICO

Area= (sqrt(3.0/4.0)*pow(a,2));

// 4. VISUALIZA RESULTADO
printf("Area total del triangulo: %f \n ", Area);


return 0;
	
	
	
}