/*----------------------------------------------------------------*/
/* Autor: Jesús Hernández Jiménez															   	*/
/* E-mail: jesushernandezjimenez1998@gmail.com 										*/
/* Fecha creacion: 01/06/2018                                     */
/* Fecha actualizacion: 08/06/2018      				                  */
/* Descripcion: En este programa se contruyen todas las fuciones  */
/*              de operaciones que permitiran realizar cada punto */
/*              del menu intentando utilizar punteros.                                         */
/*----------------------------------------------------------------*/



#include <stdio.h>
#include <string.h>
#include "colores.h"

#include "EnumEstructura.h"
#include "prototipos.h"

 int numLaptops;

/* Funciones de operaciones en el menu */
Laptops registrarLaptop(void)
{
  Laptops Laptop;
  printf("\n\n");
  printf(_TCYAN _NEGRITA"Introduce la marca del la laptop: "_NEGRITA _TBLANCO);
  fgets(Laptop.marca, TAM_MARCA, stdin);                                   	  /* Solicita la marca de la laptop al usuario        */
  strcpy(Laptop.marca, strtok(Laptop.marca, "\n"));								            /* Elimina el salto de linea '\n' que genera fgets() */

  printf(_TCYAN _NEGRITA"Introduce el modelo de la laptop: "_NEGRITA _TBLANCO);
  fgets(Laptop.modelo, TAM_MODELO, stdin);                                 			/* Solicita el modelo de la laptop al usuario       */
  strcpy(Laptop.modelo, strtok(Laptop.modelo, "\n"));           		            /* Elimina el salto de linea '\n' que genera fgets() */

  printf(_TCYAN _NEGRITA"Introduce la dirección fisica de la laptop (MAC): "_NEGRITA _TBLANCO);
  fgets(Laptop.mac, TAM_MAC, stdin);																			/* Solicita la dirección fisica de la laptop al usuario				 */
  strcpy(Laptop.mac, strtok(Laptop.mac, "\n"));										/*Elimina el salto de linea '\n' que genera fgets    */

  printf(_TCYAN _NEGRITA"Introduce el color de la laptop: "_NEGRITA _TBLANCO);
  fgets(Laptop.color, TAM_COLOR, stdin);																			/* Solicita el color de la laptop al usuario				 */
  strcpy(Laptop.color, strtok(Laptop.color, "\n"));										/*Elimina el salto de linea '\n' que genera fgets    */

  printf(_TCYAN _NEGRITA"Introduce el tipo de procesador: "_NEGRITA _TBLANCO);
  fgets(Laptop.procesador, TAM_PROCESADOR, stdin);																			/* Solicita el tipo de procesador  al usuario				 */
  strcpy(Laptop.procesador, strtok(Laptop.procesador, "\n"));										/*Elimina el salto de linea '\n' que genera fgets    */

  printf(_TCYAN _NEGRITA"Introduce la cantidad de memoria RAM: "_NEGRITA _TBLANCO);
  scanf("%d", &Laptop.ram);                       						            /* Solicita la cantidad de memoria ram de la laptop al usuario     */

  while(getchar() != '\n'); 																													/* Limpiar el buffer en caso de tener almacenado el salto de linea */

  printf(_TCYAN _NEGRITA"Introduce la capacidad del disco duro: "_NEGRITA _TBLANCO);
  scanf("%d", &Laptop.discoDuro);																		/* Solicita el tamaño del disco duro de la laptop al usuario */

  printf("\n\n");

  return Laptop;
}

void mostrarListaLaptops(Laptops listaLaptop[], int ordenar)
{
  int aTemp[numLaptops];
  for(int i = 0; i < numLaptops; i++)
  {
    aTemp[i] = i;
  }
  if(ordenar == 1)
  {
    memcpy(aTemp, ordenarAscendente(listaLaptop, aTemp), sizeof(aTemp));
  }else if (ordenar == 2) {
    memcpy(aTemp, ordenarDescendente(listaLaptop, aTemp), sizeof(aTemp));
  }
  encabezadoTabla();
  for(int i = 0; i < numLaptops; i++)
  {
    mostrarLaptops(listaLaptop[aTemp[i]]);
    printf("\n");
  }
}

void buscarLaptop(Laptops listaLaptop[])
{
  char macBuscar[TAM_MAC];
  printf(_TCYAN     _NEGRITA "Buscar Laptop por dirección física(MAC)\n\n");
  printf(_TBLANCO _NEGRITA "\n\nIngrese la MAC de la laptop: ");
  fgets(macBuscar, TAM_MAC, stdin);
  strcpy(macBuscar, strtok(macBuscar, "\n"));

  for(int i = 0; i < numLaptops; i++)
  {
    if(strcmp(macBuscar, listaLaptop[i].mac) == 0)
    {
      encabezadoTabla();
      mostrarLaptops(listaLaptop[i]);
    }
  }
}

void actualizarLaptop(Laptops listaLaptop[])
{
  char macBuscar[TAM_MAC];
  printf(_TCYAN     _NEGRITA "Buscar La laptop a actualizar por su MAC:\n\n");
  printf(_TBLANCO _NEGRITA "\nIntroduce la MAC de la laptop: ");
  fgets(macBuscar, TAM_MAC, stdin);
  strcpy(macBuscar, strtok(macBuscar, "\n"));

  for(int i = 0; i < numLaptops; i++)
  {
    if(strcmp(macBuscar, listaLaptop[i].mac) == 0)
    {
      encabezadoTabla();
      mostrarLaptops(listaLaptop[i]);
      listaLaptop[i] = registrarLaptop();
      encabezadoTabla();
      mostrarLaptops(listaLaptop[i]);
    }
  }
}

void eliminarLaptop(Laptops listaLaptop[])
{
  char macBuscar[TAM_MAC];
  printf(_TCYAN _NEGRITA "\n\nIntroduce la MAC de la laptop a eliminar: "_ARESET);
  fgets(macBuscar, TAM_MAC, stdin);
  strcpy(macBuscar, strtok(macBuscar, "\n"));

  for(int i = 0; i < numLaptops; i++)
  {
      if(strcmp(macBuscar, listaLaptop[i].mac) == 0)
      {
          encabezadoTabla();
          mostrarLaptops(listaLaptop[i]);

          printf("\n\n");

          printf(_TBLANCO _NEGRITA "\n\n¿Esta seguro de eliminar el registro? y/n:  "                _NNEGRITA _TVERDE);

          char opcionEliminar;
          while((opcionEliminar = getchar()) == 'y')
          {
            printf("\nSizeof: %lu\n", sizeof(* listaLaptop));
            listaLaptop = eliminarunaLaptop(listaLaptop, i);
          }
          printf("\n\n");
          break;
      }
  }
}

Laptops *eliminarunaLaptop(Laptops listaLaptop[], int posicion)
{
  if(posicion < (numLaptops -1))
  {
    for(int j = posicion; j < numLaptops-1; j++)
    {
      strcpy(listaLaptop[j].marca, listaLaptop[j+1].marca);
      strcpy(listaLaptop[j].modelo, listaLaptop[j+1].modelo);
      strcpy(listaLaptop[j].mac, listaLaptop[j+1].mac);
      strcpy(listaLaptop[j].color, listaLaptop[j+1].color);
      strcpy(listaLaptop[j].procesador, listaLaptop[j+1].procesador);
      listaLaptop[j].ram = listaLaptop[j+1].ram;
      listaLaptop[j].discoDuro = listaLaptop[j+1].discoDuro;
    }
  }
  strcpy(listaLaptop[numLaptops-1].marca,          "");
  strcpy(listaLaptop[numLaptops-1].modelo,       "");
  strcpy(listaLaptop[numLaptops-1].mac, "");
  strcpy(listaLaptop[numLaptops-1].color, "");
  strcpy(listaLaptop[numLaptops-1].procesador, "");
  listaLaptop[numLaptops-1].ram   = '\0';
  listaLaptop[numLaptops-1].discoDuro   = -1;
  numLaptops--;

  printf("\n\nSe ha eliminado : ...\n\n");

  return listaLaptop;
}

int * ordenarAscendente(Laptops listaLaptop[], int aTemp[])
{
  for(int i = 0; i < numLaptops; i++)
  {
    for(int j = i + 1; j < numLaptops; j++)
    {
      if(strcmp(listaLaptop[aTemp[i]].marca, listaLaptop[aTemp[j]].marca) > 0)
      {
        int aux = aTemp[i];
        aTemp[i] = aTemp[j];
        aTemp[j] = aux;
      }
    }
  }
  return aTemp;
}



int * ordenarDescendente(Laptops listaLaptop[], int aTemp[])
{
  for(int i = 0; i < numLaptops; i++)
  {
    for(int j = i + 1; j < numLaptops; j++)
    {
      if(strcmp(listaLaptop[aTemp[i]].marca, listaLaptop[aTemp[j]].marca) < 0)
      {
        int aux = aTemp[i];
        aTemp[i] = aTemp[j];
        aTemp[j] = aux;
      }
    }
  }
  return aTemp;
}
