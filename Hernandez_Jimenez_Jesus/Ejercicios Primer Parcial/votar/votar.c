/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de Creación: 16/05/2018                              */
/* Fecha de Actualización:                                    */
/* Descripción: Programa que determina si una persona puede   */
/*              votar, mediante su edad.                      */
/*------------------------------------------------------------*/



#include <stdio.h>
#include "votacion.h"


int main(void)
{
  int edad;

  printf("Proporcione su edad: ");
  scanf("%d", &edad);
  printf("\n");
  votacion(edad);

  return 0;
}
