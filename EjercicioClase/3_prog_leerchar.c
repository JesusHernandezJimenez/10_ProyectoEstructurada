/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de creación: 20/04/2018                              */
/* Fecha de actualización: 23/04/2018                         */
/* Descripción: Programa que hace uso de la funcion getchar.  */            
/*------------------------------------------------------------*/



/* Declaración de bibliotecas */
#include <stdio.h>

/* Declaracion de una constante */
const int tamanio = 5;



/* Declaración de la función principal */
int main(void)
{
  char c;
  char array[tamanio];
  int index = 0;
  while ((c = getchar()) != '\n') /* Leer caracter por caracter */
  {
    if((c >= 97) && (c <= 122)) /*Validando únicamente caracteres: letras minúsculas */
    {
      c = c-32;
      array[index] = c;
      index++;
    }
  }
  printf("\n");
  for (int i = 0; i < tamanio; i++)
  {
    printf("%c ", array[i]);
  }
  printf("\n");
  return 0;
}
