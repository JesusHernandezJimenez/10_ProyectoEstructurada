/*----------------------------------------------------------------*/
/* Autor: Jesús Hernández Jiménez																*/
/* E-mail: jesushernandezjimenez1998@gmail.com 										*/
/* Fecha creacion: 21/05/2018                                     */
/* Fecha actualizacion: 23/05/2018      				                  */
/* Descripcion: Programa que registra Laptops y realiza operaciones*/
/*              como crear, listar, ordenar, actualizar y eliminar*/
/*              además el programa se encutra dividido en partes  */
/*              para ayudar a una mejor comprensión, también se   */
/*              se utilizan diversas funciones.                   */
/*----------------------------------------------------------------*/



/* Declaración de bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Se incluyen los archivos que permitirán el correcto funcionamiento del programa */
#include "EnumEstructura.h"
#include "colores.h"
#include "prototipos.h"

/* Variable global */
int numLaptops;



/* Declaración de la función principal */
int main(void)
{
  Laptops listaLaptop[TOTAL_LAP];
  int opcion;
  do{
    menu();
    scanf("%d", &opcion);

    switch (opcion) {
      case CREAR:
                  printf(_FBLANCO _TNEGRO _NEGRITA"\n\nA L T A     D E     L A P T O P S"_ARESET);
                  printf(_TAMARILLO _NEGRITA"\n\nIntroduce la cantidad de laptops: " _TBLANCO);
                  scanf("%d",&numLaptops);
                  for(int i = 0; i < numLaptops; i++)
                  {
                     while(getchar() != '\n');
                     listaLaptop[i] = registrarLaptop();
                  }
                  while(getchar() != '\n');
                  fin();
                  break;
      case LISTAR:
                  while(getchar() != '\n');
                  printf(_FBLANCO _TNEGRO _NEGRITA"\n\nL I S T A     D E    L A P T O P S\n\n" _ARESET);
                  mostrarListaLaptops(listaLaptop, 0);
                  fin();
                  break;
      case LISTAR_ASC:
                      while(getchar() != '\n');
                      printf(_FBLANCO _TNEGRO _NEGRITA"\n\nL I S T A R  D E  F O R M A  A S C E N D E N T E\n\n" _ARESET);
                      mostrarListaLaptops(listaLaptop, 1);
                      fin();
                      break;
      case LISTAR_DES:
                      while(getchar() != '\n');
                      printf(_FBLANCO _TNEGRO _NEGRITA"\n\nL I S T A R  D E  F O R M A  D E S C E N D E N T E\n\n" _ARESET);
                      mostrarListaLaptops(listaLaptop, 2);
                      fin();
                      break;
      case BUSCAR:
                  while(getchar() != '\n');
                  printf(_TAMARILLO _NEGRITA "\n\nB U S C A R\n\n"_ARESET);

                  buscarLaptop(listaLaptop);
                  fin();
                  break;
      case ACTUALIZAR:
                      while(getchar() != '\n');
                      printf(_TAMARILLO _NEGRITA "\n\nA C T U A L I Z A R\n\n" _ARESET);

                      actualizarLaptop(listaLaptop);
                      while(getchar() != '\n');
                      fin();
                      break;
      case ELIMINAR:
                    while(getchar() != '\n');
                    printf(_TAMARILLO _NEGRITA "\n\nE L I M I N A R\n\n"_ARESET);
                    eliminarLaptop(listaLaptop);
                    while(getchar() != '\n');
                    fin();
                    break;
      case SALIR:
                system("clear");              /* Antes de terminar la ejecucion del programa, limpia la pantalla */
                exit(0);                      /* Termina la ejecucion del programa                               */
    }
  }while(opcion != SALIR);

  return 0;
}
