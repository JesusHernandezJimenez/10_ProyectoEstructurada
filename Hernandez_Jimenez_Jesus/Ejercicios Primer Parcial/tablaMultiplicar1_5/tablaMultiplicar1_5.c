/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de Creación: 16/05/2018                              */
/* Fecha de Actualización:                                    */
/* Descripción: Programa que muestra las tablas del 1-5.      */
/*------------------------------------------------------------*/



#include <stdio.h>
#include "tabla1_5.h"


int main(void)
{
  for(int x = 1; x <= 5; x++)
  {
    for(int i = 1; i <= 10; i++)
    {
      printf(" %-1d X %-3d =  %-12d\n", x, i, tabla1_5(x, i));
    }
    printf("\n");
  }
  return 0;
}
