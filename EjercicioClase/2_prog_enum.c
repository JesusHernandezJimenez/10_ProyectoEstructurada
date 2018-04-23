/*------------------------------------------------------------*/
/* Autor: Hern�ndez Jim�nez Jes�s                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de creaci�n: 22/04/2018                              */
/* Fecha de actualizaci�n:                                    */
/* Descripci�n: Programa que hace uso del tipo de dato enum.  */
/*------------------------------------------------------------*/


/* Declaración de bibliotecas */
#include <stdio.h>



/* Declaración de enum */
/* tipo identificador {lista_de_identificadores}; */
enum DIAS{L, M, MI, J, V, S, D};
enum MESES{EN = 1, FE , MAR, AB, MAY, JUN, JUL, AG, SE, OC, NO, DI};
enum FRUTAS{manzana, mango , durazno, pera, uva, pina};
enum PRECIOAUTO{NUEVO = 10, SEMINUEVO = -5, USADO, INSERVIBLE};

/* Enum anonimo */
enum {PROG, MATEDIS, MATEII, TGS, ELEC1}var1, var2, var3;
/* int array[] = {0, 1, 2, 3, 4}; */

/* Declaración de la función principal */
int main(void)
{
  printf("%d\n", USADO);
  for(enum MESES index = EN; index <= DI; index++)
  {
    printf("%d\n", index);
    switch (index)
    {
      case EN:
        printf("\nEnero\n");
      break;
      case OC:
        printf("\nOCTUBRE\n");
      break;
    }
  }
  printf("\nImprimiendo las variables del enum anonimo\n");
  printf("\n%d\n", var1);
  printf("%d\n", var2);
  printf("%d\n", var3);

  return 0;
}
