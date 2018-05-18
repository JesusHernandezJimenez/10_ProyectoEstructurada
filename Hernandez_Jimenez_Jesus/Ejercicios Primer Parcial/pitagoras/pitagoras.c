/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de Creación: 16/05/2018                              */
/* Fecha de Actualización:                                    */
/* Descripción: Programa que calcual la distancia entre los   */
/*             puntos cuyas coordenadas son proporcionadas por*/
/*              el usuario(utiliza el teorema de Pitagoras)   */
/*------------------------------------------------------------*/



#include <stdio.h>
#include <math.h>
#include "pitagoras.h"


int main(void)
{
  int x1, x2, y1, y2;

  printf("Ingresa las coordenadas del punto 1:\n");
  scanf("%d %d", &x1, &y1);
  printf("\nIngresa las coordenadas del punto 2:\n");
  scanf("%d %d", &x2, &y2);

  printf("\nLa distancia entre los dos puntos es de: %lf\n\n", sqrt((abscisas(x1, x2) * abscisas(x1, x2)) + (ordenadas(y1, y2) *ordenadas(y1, y2)) ));


  return 0;
}
