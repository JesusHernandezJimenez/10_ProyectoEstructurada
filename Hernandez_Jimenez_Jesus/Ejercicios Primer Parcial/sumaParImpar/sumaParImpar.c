/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de Creación: 16/05/2018                              */
/* Fecha de Actualización:                                    */
/* Descripción: Programa que muestra los números del 1-100    */
/*              además realiza la sumatoria de los numeros    */
/*              pares e impares.                              */
/*------------------------------------------------------------*/



#include <stdio.h>
#include "sumaparimpar.h"

int main(void)
{
  imprimir();
  printf("\nLa suma de todos los números pares del 1 al 100 es de: %d\n", sumaPar());
  printf("\nLa suma de todos los números impares del 1 al 100 es de: %d\n", sumaImpar());
  return 0;
}
