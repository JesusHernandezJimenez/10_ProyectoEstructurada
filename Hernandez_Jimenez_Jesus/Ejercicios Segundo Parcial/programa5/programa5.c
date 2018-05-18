/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de Creación: 17/05/2018                              */
/* Fecha de Actualización:                                    */
/* Descripción: Programa que busca el número menor de un      */
/*              arreglo.                                      */
/*------------------------------------------------------------*/



#include <stdio.h>

#include "programa5.h"

int main(void)
{
  printf("Del siguiente arreglo:\n");
  imprimirArreglo();
  printf("\nEl número menor es: %d\n", numerMenor());
  return 0;
}
