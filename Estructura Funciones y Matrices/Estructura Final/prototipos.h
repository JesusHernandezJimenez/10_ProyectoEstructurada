/*----------------------------------------------------------------*/
/* Autor: Jesús Hernández Jiménez															   	*/
/* E-mail: jesushernandezjimenez1998@gmail.com 										*/
/* Fecha creacion: 21/05/2018                                     */
/* Fecha actualizacion: 23/05/2018      				                  */
/* Descripcion: En este archivo se declaran los prototipos de     */
/*              funciones a utlizar en el programa principal.     */
/*----------------------------------------------------------------*/



#ifndef PROTOTIPOS_H_
#define PROTOTIPOS_H_

/* Se incluye el archivo EnumEstructura.h la cual contiene las estructuras y enum inicializadas */
#include "EnumEstructura.h"

/*  Prototipo de Funciones para el formato de pantalla */
void menu(void);
void encabezadoTabla(void);
void mostrarLaptops(Laptops);
void fin(void);

/* Prototipo de funciones para relizar operaciones en el menu */
Laptops registrarLaptop(void);
void mostrarListaLaptops(Laptops[], int);
void buscarLaptop(Laptops[]);
void actualizarLaptop(Laptops[]);
void eliminarLaptop(Laptops[]);

/* Funcion que permite elimnar una laptop */
Laptops *eliminarunaLaptop(Laptops[], int);

/* Funciones que permiten ordenar los datos*/
int * ordenarAscendente(Laptops [], int []);
int * ordenarDescendente(Laptops [], int []);

#endif
