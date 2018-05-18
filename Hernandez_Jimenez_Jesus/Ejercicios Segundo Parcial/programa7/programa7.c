/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de Creación: 17/05/2018                              */
/* Fecha de Actualización:                                    */
/* Descripción: Programa que muestra un menú de 5 opciones.   */
/*------------------------------------------------------------*/



#include <stdio.h>
#include <stdlib.h>
#include "programa7.h"

int main(void)
{
  int opc;
  do{
    mostrarMenu();
    printf("Escoge una opción: ");
    scanf("%d", &opc);
    menu(opc);
  }while(opc != SALIR);
  return 0;
}
