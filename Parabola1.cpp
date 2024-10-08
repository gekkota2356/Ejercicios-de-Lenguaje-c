/*
TEMA: ECUACIONES MATEMATICAS USANDO OPERADORES MATEMATICOS Y FUNCIONES DE LA LIBRERIA math.h   
                                                                                                                  
                                                                                                                 
EQUIPO: 05   FECHA:11/3/2024                                                                               


PROGRAMA:Diseño de un programa lineal que realiza el calculo del area de diferentes triangulos        
                                                                                                             
                                                                                                                 
*/                                                             

#include <stdio.h>
#include <math.h>

// DECLARACION DE VARIABLE GLOBAL CONSTANTE

const float G=9.81;

int main()

{
// 1. DECLARACION DE VARIABLE
 float a, Vo, t, X, Y;


// 2. LECTURA DE DATOS
  printf("digita la velocidad inicial: ");
  scanf("%f", &Vo);
  printf("digita el angulo de la trayectoria a: ");
  scanf("%f", &a);
  t= 0.0;
 
  
// 3. CALCULO MATEMATICO
  X = Vo * cos( (a*M_PI)/180.0) * t;
  Y = Vo * sin( (a*M_PI)/180.0) * t - (0.5 * G * pow(t,2) );
// 4. VISUALIZA RESULTADO
   /*printf("X = %f \n ", X);
   printf("Y = %f \n ", Y);*/ 
     printf("X,Y) = (%.2f,%.2f) \n ", X,Y);  
  
  
   t= 0.2;
   X = Vo * cos( (a*M_PI)/180.0) * t;
  Y = Vo * sin( (a*M_PI)/180.0) * t - (0.5 * G * pow(t,2) );
// 4. VISUALIZA RESULTADO
   printf("X,Y) = (%.2f,%.2f) \n ", X,Y);
  
  
  
  
  
   t= 0.4;
   X = Vo * cos( (a*M_PI)/180.0) * t;
  Y = Vo * sin( (a*M_PI)/180.0) * t - (0.5 * G * pow(t,2) );
// 4. VISUALIZA RESULTADO
   printf("X,Y) = (%.2f,%.2f) \n ", (X,Y));
   


return 0;
		
}