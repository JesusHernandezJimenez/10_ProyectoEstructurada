/*----------------------------------------------------------------*/
/* Autor: Jesús Hernández Jiménez															   	*/
/* E-mail: jesushernandezjimenez1998@gmail.com 										*/
/* Fecha creacion: 21/05/2018                                     */
/* Fecha actualizacion: 23/05/2018      				                  */
/* Descripcion: En este programa se construyen las funcions que   */
/*              permitirán darle formato al programa principal.   */
/*----------------------------------------------------------------*/



/* Declaración de bibliotecas */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Se incluye el archivo que contiene el formato de los colores */
#include "colores.h"

/* Se incluye el archivo que contiene los prototipos de funciones */
#include "prototipos.h"

/* Variable global */
extern int numLaptops;

/* Esta función muestra el formato del menu */
void menu(void)
{
  system("clear");
	puts("");
	printf(_FBLANCO _TNEGRO  _NEGRITA"\n     ***I V E N T A R I O  D E  L A P T O P S***   " _ARESET);
	printf(_FBLANCO _TROJO _NEGRITA "\n           M E N U    P R I N C I P A L            \n"_ARESET);

	printf(_TAZUL _NEGRITA "\n\t1. Alta de Laptops");
	printf("\n\t2. Lista de Laptops");
	printf("\n\t3. Lista de Laptops Ascendente");
	printf("\n\t4. Lista de Laptops Descendente");
  printf("\n\t5. Buscar Laptop");
	printf("\n\t6. Actualizar Laptop");
	printf("\n\t7. Eliminar Laptop");
	printf("\n\t8. Salir");

  printf(_TBLANCO _NEGRITA _CURSIVA"\n\nSeleccione una opcion: "_ARESET);
}

/* Esta fución solo muetra el encabezado del los datos del registro */
void encabezadoTabla(void)
{
  printf(_FBLANCO _TNEGRO _NEGRITA"\n\nL I S T A     D E    A U T O M O V I L E S\n\n" _ARESET);
  printf(_TCYAN _NEGRITA);
  printf("%-12s|%-15s|%-20s| COLOR	|	PROCESADOR\t |	RAM(GB)\t |	DISCO DURO(GB)	|", "MARCA", "	MODELO", "		MAC");
  printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
}

/* Esta fución muestra la información del registro */
void mostrarLaptops(Laptops Laptop)
{
      printf(_TBLANCO _NEGRITA);
      printf("%-12s|\t%-14.25s|\t%-26s|	%-8s|\t%-17s|\t%-9d|\t%-16d|", Laptop.marca,
                                                                       Laptop.modelo,
                                                                       Laptop.mac,
                                                                       Laptop.color,
                                                                       Laptop.procesador,
                                                                       Laptop.ram,
                                                                       Laptop.discoDuro);
}

/* Esta función solicita al usuario que presione un enter para poder salir */
void fin(void)
{
  char c;
  printf(_TAMARILLO _NEGRITA "\n\n\nPresiones Enter para salir: ");
	while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
	{}
}
