/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de Creación: 16/05/2018                              */
/* Fecha de Actualización:                                    */
/* Descripción: Programa que muestra la tabla del 1.          */
/*------------------------------------------------------------*/



#include <stdio.h>
#include "tabla1.h"


int main(void)
{
  for(int i = 1; i <= 10; i++)
  {
    printf(" %-1d X %-3d =  %-12d\n", tabla1(1), i,  tabla1(i));
  }
  return 0;
}
