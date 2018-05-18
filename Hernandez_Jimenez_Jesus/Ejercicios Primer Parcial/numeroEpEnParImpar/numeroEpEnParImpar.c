/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de Creación: 16/05/2018                              */
/* Fecha de Actualización:                                    */
/* Descripción: Programa que determina si un número es par o  */
/*              impar además determina si es positivo o       */
/*              negativo(el número lo proporciona el usuario).*/
/*------------------------------------------------------------*/



#include <stdio.h>
#include "parimpar.h"


int main(void)
{
  int num;
  printf("Ingresa un número: ");
  scanf("%d", &num);
  numeropar(num);
  numeroPos_Neg(num);
  return 0;
}
