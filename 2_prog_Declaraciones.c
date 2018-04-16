/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de creación: 15/04/2018                              */
/* Fecha de actualización: 15/04/2018                         */
/* Descripción: Programa que imprime constantes utilizando    */
/*              #define y const asi como macros de las        */
/*              estructuras for, while y do-while.            */
/*------------------------------------------------------------*/


#include <stdio.h>

/* DECLARACIÓN DE CONSTANTES CON #define */
/* No se reserva espacio en memoria */

#define PI 3.1416
#define G 9.81
#define TAMANIO 10
#define MIN 0
#define MAX 100

/* Imprementación de macro */
#define SUMA(x, y) x + y
#define RESTA(x, y) x- y
#define MULT(x, y) x * y
#define DIV(x, y) x / y
#define POTCUADRADO(x) (x) * (x)
#define POTCUBO(x) (x) * (x) * (x)

/* Definir ciclos con macro */
#define CICLOFOR(x, y) for(x = 0; x < y; x++)
#define CICLOWHILE(z, w) while(z < w)

/* Se define el ciclo DO-WHILE */
#define DO do
#define CICLODOWHILE(j, i) while(j >= i);

/* DECLARACIÓN DE CONSTANTES CON const */
/* Se reserva espacio en memoria */
const float pi = 3.1416;
const float g = 9.81;
const int tamanio = 10;
const int min = 0;
const int max = 100;

/* Declarción de la función principal */
int main(void)
{
  /* Imprimir constantes #define */
  printf("Imprime los valores declarados con #define\n");
  printf("\tValor de PI: %.4f \n", PI);
  printf("\tValor de G: %.2f \n", G);
  printf("\tValor de Tamaño: %d \n", TAMANIO);
  printf("\tValor MÍNIMO: %d \n", MIN);
  printf("\tValor MÁXIMO: %d \n\n", MAX);

  /* Imprimir constantes const */
  printf("Imprime los valores declarados con const\n");
  printf("\tValor de pi: %.4f \n", pi);
  printf("\tValor de g: %.2f \n", g);
  printf("\tValor de tamaño: %d \n", tamanio);
  printf("\tValor mínimo: %d \n", min);
  printf("\tValor máximo: %d \n\n", max);

  /* Imprimir macro */
  printf("Imprime los macros declarados\n");
  printf ("\tOperación SUMA: %d\n", SUMA(3, 4));
  printf ("\tOperación RESTA: %d\n", RESTA(3, 4));
  printf ("\tOperación MULT: %d\n", MULT(3, 4));
  printf ("\tOperación DIV: %d\n", DIV(3, 4));
  printf ("\tOperación POTENCIA AL CUADRADO: %d\n", POTCUADRADO(3));
  printf ("\tOperación POTENCIA AL CUBO: %d\n\n", POTCUBO(3));

  /* Utilizando las macros de ciclo */
  printf("Imprime el ciclo for con macro\n");
  int x;
  int y = 10;
  CICLOFOR(x, y)
  {
    printf("\tHola mundo\n");
  }

  /* Utilizando el macro de ciclo while */
  int z = 0;
  int w = 10;

  /* Imprime el macro del ciclo While */
  printf("Imprime el macro del ciclo while\n");
  CICLOWHILE(z, w)
  {
    printf ("\t%d\n", z);
    z += 1;
  }

  /* Utilizando el macro de ciclo DO-WHILE */
  int j = 10;
  int i = 0;

  /* Imprime el macro del ciclo do-while */
  printf("Imprime el macro del ciclo do-while\n");
  DO
  {
    printf("\t%d\n", j);
    j -= 1;
  } CICLODOWHILE(j, i);
  return 0;
}
