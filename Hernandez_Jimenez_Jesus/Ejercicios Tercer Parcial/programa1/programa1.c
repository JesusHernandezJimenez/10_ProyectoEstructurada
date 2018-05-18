/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de Creación: 17/05/2018                              */
/* Fecha de Actualización:                                    */
/* Descripción: Programa realiza un total de 9 dibujos en la  */
/*              pantalla donde el usuario determina el tamaño.*/
/*------------------------------------------------------------*/



#include <stdio.h>
#include "programa1.h"

int main(void)
{
  int tam;
  printf("Proporciona el tamaño de las figuras: ");
  scanf("%d", &tam);
  dibujarFigura1(tam);
  dibujarFigura2(tam);
  dibujarFigura3(tam);
  dibujarFigura4(tam);
  dibujarFigura5(tam);
  dibujarFigura6(tam);
  dibujarFigura7(tam);
  dibujarFigura8(tam);
  dibujarFigura9(tam);

  return 0;
}
