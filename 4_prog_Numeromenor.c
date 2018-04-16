/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de creación: 15/04/2018                              */
/* Fecha de actualización: 15/04/2018                         */
/* Descripción: Programa que busca el número menor de un      */
/*              arreglo proporcionado por el usuario.         */
/*------------------------------------------------------------*/



/* Declaración de bibliotecas */
#include <stdio.h>



/* Declaración de la función principal */
int main(void)
{
  int numeros[9];
  int menor,  i;
  for (i = 0; i < 9; i++)
  {
    printf("Ingresa el número %d\n", i +1);
    scanf( "%d", &numeros[i]);

  }
  menor = numeros[0];
  for (i = 1; i < 9; i++)
  {
    if (menor > numeros[i])
    {

      menor = numeros[i];
    }
  }
  printf("El número menor del arreglo es %d\n", menor);
  return 0;
}
