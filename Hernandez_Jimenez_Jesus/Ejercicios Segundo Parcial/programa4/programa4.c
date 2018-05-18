/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de Creación: 17/05/2018                              */
/* Fecha de Actualización:                                    */
/* Descripción: Programa que busca el número mayor de un      */
/*              arreglo.                                      */
/*------------------------------------------------------------*/



#include <stdio.h>

#include "programa4.h"

int main(void)
{
  printf("Del siguiente arreglo:\n");
  imprimirArreglo();
  printf("\nEl número mayor es: %d\n", numerMayor());
  return 0;
}
