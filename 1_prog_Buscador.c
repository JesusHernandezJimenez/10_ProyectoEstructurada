/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de Creación: 11/04/2018                              */
/*Fecha de actualización: 12/04/2018                          */
/* Descripción: Programa que calcula las veces que se repiten */
/*              los números del 0-9 de una arreglo dado.      */
/*------------------------------------------------------------*/



/* Declaración de bibliotecas */
#include <stdio.h>



/* Declaración de la función principal */
int main(void)
{
  int i, ini, repit, x;
  int arreglo[10]= {4, 1, 3, 1, 1, 0, 9, 9 ,5 , 5};
  for(i = 0; i <= 9; i++)
  {
    ini = i;
    repit = 0;
    for (x = 0; x <= 9; x++)
    {
      if (ini == arreglo[x])
      {
        repit = repit + 1;
      }
    }
    if (repit == 0)
    {
      printf("%d: no se encuentra en el arreglo\n", i);
    }
    else if (repit == 1)
    {
      printf("%d: se repite %d vez\n", i, repit);
    }
    else
    {
      printf("%d: se repite %d veces\n", i, repit);
    }
  }
  return 0;
}
