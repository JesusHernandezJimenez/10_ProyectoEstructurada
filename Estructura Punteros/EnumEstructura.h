/*----------------------------------------------------------------*/
/* Autor: Jesús Hernández Jiménez															   	*/
/* E-mail: jesushernandezjimenez1998@gmail.com 										*/
/* Fecha creacion: 01/06/2018                                     */
/* Fecha actualizacion: 08/06/2018      				                  */
/* Descripcion: En este archivo se declaran las estructuras que se*/
/*							utilizaran en las operaciones del programa principal*/
/*----------------------------------------------------------------*/


#ifndef ENUM_ESTRUCTURA_H_
#define ENUM_ESTRUCTURA_H_

/* Constantes */
#define TAM_MODELO  	 10
#define TAM_MARCA    	 15
#define TAM_MAC 			 20
#define TAM_COLOR 	   10
#define TAM_PROCESADOR 10
#define TOTAL_LAP			 10

/* Enum */
enum OPCIONES_MENU{CREAR = 1,
									 LISTAR,
									 LISTAR_ASC,
                   LISTAR_DES,
                   BUSCAR,
                   ACTUALIZAR,
                   ELIMINAR,
                   SALIR};

/* Estructura */
typedef struct
{
	char marca[TAM_MARCA];
	char modelo[TAM_MODELO];
	char mac[TAM_MAC];
	char color[TAM_COLOR];
	char procesador[TAM_PROCESADOR];
	int ram;
	int discoDuro;
}Laptops;

#endif
