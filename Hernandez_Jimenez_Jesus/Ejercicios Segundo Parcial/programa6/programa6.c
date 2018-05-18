/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de Creación: 17/05/2018                              */
/* Fecha de Actualización:                                    */
/* Descripción: Programa que calcula la suma de la diagonal   */
/*              de un arreglo bidimensional de 5*5.           */
/*------------------------------------------------------------*/



#include <stdio.h>

#include "programa6.h"

int main(void)
{
  printf("Del siguiente arreglo:\n");
  imprimirArreglo();
  printf("\nLa suma donde la posición de las filas y columnas son iguales es de: %d\n", sumaDiagonal());
  return 0;
}
