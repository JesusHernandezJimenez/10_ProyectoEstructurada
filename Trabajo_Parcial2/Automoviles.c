/*----------------------------------------------------------------*/
/* Autores: Diana	Karina Vázquez Aguilar												  */
/*					Nóe Enriquez Antonio																  */
/*					Aldair Manzano Sanchez														    */
/*					Edson	Osnart Santos Zaráte												    */
/*					Jesús Hernández Jiménez																*/
/* E-mails:	dian24V@hotmail.com 																	*/
/*					noeenriquez1998@gmail.com 														*/
/*					santosedsonSIS@gmail.com 															*/
/*					jesushernandezjimenez1998@gmail.com 									*/
/*					aldairmanzanosanchez@gmail.com 												*/
/* Fecha creacion: 03/05/2018                                     */
/* Fecha actualizacion: 08/05/2018 						                    */
/* Descripcion: Este programa esta elaborado en el lenguaje de    */
/*              programacion C, para fines academicos. En el cual */
/*              se incluyen:                                      */
/*                              - los tipos de de datos basico:   */
/*                                (int, char, float, void).       */
/*                              - arreglos                        */
/*                              - estructuras                     */
/*                              - constantes                      */
/*                              - enumeraciones                   */
/*                              - menu de opciones                */
/*              Tambien se incluyen funciones de la biblioteca    */
/*              string.h:                                         */
/*                        - strcpy()                              */
/*                        - strtok()                              */
/*                                                                */
/*              Asi mismo, se utiliza la funcion system(),        */
/*              propiamente de la biblioteca stdlib.h             */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "colores.h"




#define TAM_MARC  50        /* Definicion del tamaño del nombre de la marca del automovil */
#define TAM_PLACA   15        /* Tamaño de la placa del automovil          							    */
#define TOTAL_AUT 10        /* Tamaño total de automoviles		                     			  */
#define TAM_COLOR 10				/* Tamaño de el color del automovil													  */




/* Declaracion de enumeraciones para el control de menu de opciones:                */
/* CREAR      = 1                                                                   */
/* LISTAR     = 2                                                                   */
/* LISTAR_ASC = 3                                                                   */
/* LISTAR_DES = 4                                                                   */
/* BUSCAR     = 5                                                                   */
/* ACTUALIZAR = 6                                                                   */
/* ELIMINAR   = 7                                                                   */
/* SOBRE 			= 8																																		*/
/* SALIR      = 9                                                                   */

enum OPCIONES_MENU{CREAR = 1,
									 LISTAR,
									 LISTAR_ASC,
                   LISTAR_DES,
                   BUSCAR,
                   ACTUALIZAR,
                   ELIMINAR,
									 SOBRE,
                   SALIR};

/* Se define una estructura para modelar los datos de un automovil */
/* Los miembros de la estructura son:                              */
/*                                    - marca                      */
/*                                    - modelo                     */
/*                                    - potencia                   */
/*                                    - color                      */
/*                                    - capacidad_de_tanque        */
/*                                    - velocidad_maxima           */

typedef struct
{
	char marca[TAM_MARC];
	char placa[TAM_PLACA];
	int potencia;
	char color[TAM_COLOR];
	float capacidad_de_tanque;
	int velocidad_maxima;
}Atomovil;



int main(void)
{
  Atomovil automoviles[TOTAL_AUT];      /* Declaracion de una variable de arreglo de estructura automoviles[]. */
	int numAutos = 0;                     /* Controla el numero de automoviles que desea el usuario.             */
	int opcion;                     		  /* Controla las opciones del menu.                                     */
	char c;                          			/* Lee un caracter y valida el salto de linea para salir de la opcion. */



	int arrayTemp[TOTAL_AUT];      				/* Almacena los indices de los registros almacenados en la estructura */
	char placaBuscar[50];            			/* Almacena la placa del automovil dentro de la estructura            */

	do{
		system("clear");  /* Limpia toda la pantalla.           */
		puts("");         /* Haciendo salto de lina con puts(). */



		printf(_FBLANCO _TNEGRO  _NEGRITA"\n***R E G I S T R O   D E   A U T O M O V I L E S***" _ARESET);



		printf(_FBLANCO _TROJO _NEGRITA "\n           M E N U    P R I N C I P A L            \n"_ARESET);

		printf(_TAZUL _NEGRITA "\n\t1. Alta de Automoviles");
		printf("\n\t2. Lista de Automoviles");
		printf("\n\t3. Lista de Automoviles Acendente");
		printf("\n\t4. Lista de Automoviles Descendente");
    printf("\n\t5. Buscar Automovil");
		printf("\n\t6. Actualizar Automovil");
		printf("\n\t7. Eliminar Automovil");
		printf("\n\t8. ¿Quienes somos?");
		printf("\n\t9. Salir");


		printf(_TBLANCO _NEGRITA _CURSIVA"\n\nSeleccione una opcion: "_ARESET);
		scanf("%d", &opcion);



		switch(opcion)
		{
			case CREAR:
									printf(_FBLANCO _TNEGRO _NEGRITA"\n\nA L T A     D E     A U T O M O V I L E S"_ARESET);
									printf(_TAMARILLO _NEGRITA"\n\nIntroduce la cantidad de Automoviles: " _TBLANCO);
									scanf("%d",&numAutos);



									printf("\n\n" _ARESET);

									/* Ciclo for: permite solcitar los datos de el número de automoviles proporcionado por el usuario */
									for(int i = 0; i < numAutos; i++)
									{
									  while(getchar() != '\n'); /* Limpiar el buffer en caso de tener almacenado el salto de linea */

										printf(_TCYAN _NEGRITA"Introduce la marca del automovil: "_NEGRITA _TBLANCO);
										fgets(automoviles[i].marca, TAM_MARC, stdin);                                   	  /* Solicita la marca del automovil al usuario        */
										strcpy(automoviles[i].marca, strtok(automoviles[i].marca, "\n"));								    /* Elimina el salto de linea '\n' que genera fgets() */

										printf(_TCYAN _NEGRITA"Introduce la placa del automovil: "_NEGRITA _TBLANCO);
										fgets(automoviles[i].placa, TAM_PLACA, stdin);                                 			/* Solicita la placa del automovil al usuario       */
										strcpy(automoviles[i].placa, strtok(automoviles[i].placa, "\n"));           		  /* Elimina el salto de linea '\n' que genera fgets() */

										printf(_TCYAN _NEGRITA"Introduce el color del automovil: "_NEGRITA _TBLANCO);
										fgets(automoviles[i].color, TAM_COLOR, stdin);																			/* Solicita el color del automovil al usuario				 */
										strcpy(automoviles[i].color, strtok(automoviles[i].color, "\n"));										/*Elimina el salto de linea '\n' que genera fgets    */

										printf(_TCYAN _NEGRITA"Introduce la potencia del automovil: "_NEGRITA _TBLANCO);
										scanf("%d", &automoviles[i].potencia);                       						            /* Solicita la potencia del automovil al usuario     */

										while(getchar() != '\n'); 																													/* Limpiar el buffer en caso de tener almacenado el salgo de linea */

										printf(_TCYAN _NEGRITA"Introduce la capacidad del tanque de gasolina: "_NEGRITA _TBLANCO);
										scanf("%f", &automoviles[i].capacidad_de_tanque);																		/* Solicita la capacidad del tanque de gasolina del automovil al usuario */

										printf(_TCYAN _NEGRITA"Introduce la velocidad maxima del automovil: "_NEGRITA _TBLANCO);
										scanf("%d", &automoviles[i].velocidad_maxima);																			/* Solicita la velocidad máxima del automovil al usuario */
										printf("\n\n");
									}

									while(getchar() != '\n');																														  /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
								  printf(_TROJO _NEGRITA "Presione la tecla Enter para salir: ");

									while((c=getchar()) != '\n')  																												/* Solicita un enter al usuario para reiniciar el menu principal */
									{}
									break;

			case LISTAR:
									printf(_FBLANCO _TNEGRO _NEGRITA"\n\nL I S T A     D E    A U T O M O V I L E S\n\n" _ARESET);

									/* Ciclo for: permite imprimir los datos de los ingresados por el usuario */
									printf(_TCYAN _NEGRITA);
									printf("%-20.25s|%-10s|%-15s|	POTENCIA (Hp)	|	CAPACIDAD DE TANQUE (litros) |	VELOCIDAD MAXIMA (Km/h) |", "MARCA", "	PLACA", "	COLOR");
									printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
									for(int i = 0; i < numAutos; i++)
									{
										printf(_TBLANCO _NEGRITA);
										printf("%-20s|\t%-9s|\t%-14s|\t%-16d|\t%-22.2f\t|\t\t%d\t\t|", 	 automoviles[i].marca,
																																										 automoviles[i].placa,
																																										 automoviles[i].color,
																																										 automoviles[i].potencia,
																																										 automoviles[i].capacidad_de_tanque,
																																										 automoviles[i].velocidad_maxima);
										printf("\n");
									}

									while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salto de linea */
									printf(_TAMARILLO _NEGRITA "\n\n\nPresiones Enter para salir: ");

									while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
									{}
									break;
			case LISTAR_ASC:
											while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
											printf(_FBLANCO _TNEGRO _NEGRITA"\n\nL I S T A R    A S C E D E N T E\n\n"_ARESET);

											for(int i = 0; i < numAutos; i++)
												arrayTemp[i] = i;
											for(int i = 0; i < numAutos; i++)
												for(int j = i + 1; j < numAutos; j++)
													if(strcmp(automoviles[arrayTemp[i]].marca, automoviles[arrayTemp[j]].marca) > 0)
													{
														int aux = arrayTemp[i];
														arrayTemp[i] = arrayTemp[j];
														arrayTemp[j] = aux;
													}

											/* Ciclo for: permite imprimir los datos de los ingresados por el usuario */
											printf(_TCYAN _NEGRITA);
											printf("%-20.25s|%-10s|%-15s|	POTENCIA	|	CAPACIDAD DE TANQUE (litros) |	VELOCIDAD MAXIMA (Km/h) |", "MARCA", "	PLACA", "	COLOR");
											printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
											for(int i = 0; i < numAutos; i++)
											{
												printf(_TBLANCO _NEGRITA);
												printf("%-20s|\t%-9s|\t%-14s|\t%-16d|\t%-22.2f\t|\t\t%d\t\t|", 	 automoviles[arrayTemp[i]].marca,
																																												 automoviles[arrayTemp[i]].placa,
																																												 automoviles[arrayTemp[i]].color,
																																												 automoviles[arrayTemp[i]].potencia,
																																												 automoviles[arrayTemp[i]].capacidad_de_tanque,
																																												 automoviles[arrayTemp[i]].velocidad_maxima);
												printf("\n");

											}

											printf(_TAMARILLO _NEGRITA "\n\nPresione Enter para regresar al menu principal: ");
											while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
											{}
											break;
			case LISTAR_DES:
											while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
											printf(_FBLANCO _TNEGRO _NEGRITA"\n\nL I S T A R    D E S C E D E N T E\n\n"_ARESET);

											for(int i = 0; i < numAutos; i++)
												arrayTemp[i] = i;
											for(int i = 0; i < numAutos; i++)
												for(int j = i + 1; j < numAutos; j++)
													if(strcmp(automoviles[arrayTemp[i]].marca, automoviles[arrayTemp[j]].marca) < 0)
													{
														int aux = arrayTemp[i];
														arrayTemp[i] = arrayTemp[j];
														arrayTemp[j] = aux;
													}

											/* Ciclo for: permite imprimir los datos de los ingresados por el usuario */
											printf(_TCYAN _NEGRITA);
											printf("%-20.25s|%-10s|%-15s|	POTENCIA	|	CAPACIDAD DE TANQUE (litros) |	VELOCIDAD MAXIMA (Km/h) |", "MARCA", "	PLACA", "	COLOR");
											printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
											for(int i = 0; i < numAutos; i++)
											{
												printf(_TBLANCO _NEGRITA);
												printf("%-20s|\t%-9s|\t%-14s|\t%-16d|\t%-22.2f\t|\t\t%d\t\t|", 	 automoviles[arrayTemp[i]].marca,
																																												 automoviles[arrayTemp[i]].placa,
																																												 automoviles[arrayTemp[i]].color,
																																												 automoviles[arrayTemp[i]].potencia,
																																												 automoviles[arrayTemp[i]].capacidad_de_tanque,
																																												 automoviles[arrayTemp[i]].velocidad_maxima);
												printf("\n");

											}

											printf(_TAMARILLO _NEGRITA "\n\nPresione Enter para regresar al menu principal: ");
											while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
											{}
											break;

			case BUSCAR:
									while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salto de linea */
									printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R\n\n");
									printf(_TCYAN     _NEGRITA "Buscar Auto por placa\n\n");
									printf(_TBLANCO _NEGRITA "\n\nIngrese la placa del Auto: ");
									fgets(placaBuscar, TAM_PLACA, stdin);
									strcpy(placaBuscar, strtok(placaBuscar, "\n"));

									for(int i = 0; i < numAutos; i++)
									{
										if(strcmp(placaBuscar, automoviles[i].placa) == 0)
										{
											printf(_TCYAN _NEGRITA);
											printf("%-20.25s|%-10s|%-15s|	POTENCIA	|	CAPACIDAD DE TANQUE (litros) |	VELOCIDAD MAXIMA (Km/h) |", "MARCA", "	PLACA", "	COLOR");
											printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
											printf(_TBLANCO _NEGRITA);
											printf("%-20s|\t%-9s|\t%-14s|\t%-16d|\t%-22.2f\t|\t\t%d\t\t|", 	 	 automoviles[i].marca,
																																												 automoviles[i].placa,
																																												 automoviles[i].color,
																																												 automoviles[i].potencia,
																																												 automoviles[i].capacidad_de_tanque,
																																												 automoviles[i].velocidad_maxima);
											printf("\n");
										}
									}
									printf(_TAMARILLO _NEGRITA "\n\nPresione Enter para regresar al menu principal: ");
									while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
									{}
									break;
			case ACTUALIZAR:
											while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salto de linea */
											printf(_TAMARILLO _NEGRITA "\n\n3. A C T U A L I Z A R\n\n");

											printf(_TCYAN     _NEGRITA "Buscar el automovil a actualizar por PLACA:\n\n");
											printf(_TBLANCO _NEGRITA "\nIntroduce la placa del automovil: ");
											fgets(placaBuscar, TAM_PLACA, stdin);
											strcpy(placaBuscar, strtok(placaBuscar, "\n"));

											for(int i = 0; i < numAutos; i++)
											{
												if(strcmp(placaBuscar, automoviles[i].placa) == 0)
												{
													printf(_TCYAN _NEGRITA);
													printf("%-20.25s|%-10s|%-15s|	POTENCIA	|	CAPACIDAD DE TANQUE (litros) |	VELOCIDAD MAXIMA (Km/h) |", "MARCA", "	PLACA", "	COLOR");
													printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
													printf(_TBLANCO _NEGRITA);
													printf("%-20s|\t%-9s|\t%-14s|\t%-16d|\t%-22.2f\t|\t\t%d\t\t|", 	 automoviles[i].marca,
																																													 automoviles[i].placa,
																																													 automoviles[i].color,
																																													 automoviles[i].potencia,
																																													 automoviles[i].capacidad_de_tanque,
																																													 automoviles[i].velocidad_maxima);
													printf("\n\n");

													printf(_TCYAN _NEGRITA"Introduce la marca del automovil: "_NEGRITA _TBLANCO);
													fgets(automoviles[i].marca, TAM_MARC, stdin);                                   	  /* Solicita la marca del automovil al usuario        */
													strcpy(automoviles[i].marca, strtok(automoviles[i].marca, "\n"));								    /* Elimina el salto de linea '\n' que genera fgets() */

													printf(_TCYAN _NEGRITA"Introduce la placa del automovil: "_NEGRITA _TBLANCO);
													fgets(automoviles[i].placa, TAM_PLACA, stdin);                                 			/* Solicita la placa del automovil al usuario       */
													strcpy(automoviles[i].placa, strtok(automoviles[i].placa, "\n"));           		  /* Elimina el salto de linea '\n' que genera fgets() */

													printf(_TCYAN _NEGRITA"Introduce el color del automovil: "_NEGRITA _TBLANCO);
													fgets(automoviles[i].color, TAM_COLOR, stdin);																			/* Solicita el color del automovil al usuario				 */
													strcpy(automoviles[i].color, strtok(automoviles[i].color, "\n"));										/*Elimina el salto de linea '\n' que genera fgets    */

													printf(_TCYAN _NEGRITA"Introduce la potencia del automovil: "_NEGRITA _TBLANCO);
													scanf("%d", &automoviles[i].potencia);                       						            /* Solicita la potencia del automovil al usuario     */

													while(getchar() != '\n'); 																													/* Limpiar el buffer en caso de tener almacenado el salgo de linea */

													printf(_TCYAN _NEGRITA"Introduce la capacidad del tanque de gasolina: "_NEGRITA _TBLANCO);
													scanf("%f", &automoviles[i].capacidad_de_tanque);																		/* Solicita la capacidad del tanque de gasolina del automovil al usuario */

													printf(_TCYAN _NEGRITA"Introduce la velocidad maxima del automovil: "_NEGRITA _TBLANCO);
													scanf("%d", &automoviles[i].velocidad_maxima);																			/* Solicita la velocidad máxima del automovil al usuario */
													printf("\n\nEL REGISTRO HA SIDO ACTUALIZADO\n\n");
													printf(_TCYAN _NEGRITA);
													printf("%-20.25s|%-10s|%-15s|	POTENCIA	|	CAPACIDAD DE TANQUE (litros) |	VELOCIDAD MAXIMA (Km/h) |", "MARCA", "	PLACA", "	COLOR");
													printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
													printf(_TBLANCO _NEGRITA);
													printf("%-20s|\t%-9s|\t%-14s|\t%-16d|\t%-22.2f\t|\t\t%d\t\t|", 	 automoviles[i].marca,
																																													 automoviles[i].placa,
																																													 automoviles[i].color,
																																													 automoviles[i].potencia,
																																													 automoviles[i].capacidad_de_tanque,
																																													 automoviles[i].velocidad_maxima);
												}
											}
											while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
											printf(_TAMARILLO _NEGRITA "\n\nPresione Enter para regresar al menu principal: ");
											while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
											{}
											break;
			case ELIMINAR:
										while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
										printf(_TCYAN _NEGRITA "\n\nIntroduce la matricula: ");
										fgets(placaBuscar, TAM_PLACA, stdin);
										strcpy(placaBuscar, strtok(placaBuscar, "\n"));



										for(int i = 0; i < numAutos; i++)
										{
											if(strcmp(placaBuscar, automoviles[i].placa) == 0)
											{
												printf(_TROJO     _NEGRITA);
													printf("%-20.25s|%-10s|%-15s|	POTENCIA	|	CAPACIDAD DE TANQUE (litros) |	VELOCIDAD MAXIMA (Km/h) |", "MARCA", "	PLACA", "	COLOR");
												printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
												printf(_TBLANCO _NEGRITA);
												printf("%-20s|\t%-9s|\t%-14s|\t%-16d|\t%-22.2f\t|\t\t%d\t\t|",automoviles[i].marca,
																																												 automoviles[i].placa,
																																												 automoviles[i].color,
																																												 automoviles[i].potencia,
																																												 automoviles[i].capacidad_de_tanque,
																																												 automoviles[i].velocidad_maxima);


												printf("\n\n");

												printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "_NNEGRITA _TVERDE);



												char opcionEliminar;
												while((opcionEliminar = getchar()) == 's')
												{
														for(int j = i; j < numAutos-1; j++)
														{
															strcpy(automoviles[j].marca,automoviles[j+1].marca);
															strcpy(automoviles[j].placa, automoviles[j+1].placa);
															strcpy(automoviles[j].color, automoviles[j+1].color);
															automoviles[j].potencia   = automoviles[j+1].potencia;
															automoviles[j].capacidad_de_tanque = automoviles[j+1].capacidad_de_tanque;
															automoviles[j].velocidad_maxima    = automoviles[j+1].velocidad_maxima;

														}
														printf("\n\nSe ha eliminado : ...\n\n");
												}

												strcpy(automoviles[numAutos-1].marca,          "");
												strcpy(automoviles[numAutos-1].placa,       "");
												strcpy(automoviles[numAutos-1].color, "");
												automoviles[numAutos-1].potencia     = '\0';
												automoviles[numAutos-1].capacidad_de_tanque = -1;
												automoviles[numAutos-1].velocidad_maxima   = -1;
												numAutos--;

												for(int i = 0; i < numAutos; i++)
												{
													if(strcmp(placaBuscar, automoviles[i].placa) == 0)
													{
														printf(_TROJO     _NEGRITA);
														printf("%-20.25s|%-10s|%-15s|	POTENCIA	|	CAPACIDAD DE TANQUE (litros) |	VELOCIDAD MAXIMA (Km/h) |", "MARCA", "	PLACA", "	COLOR");
														printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
														printf(_TBLANCO _NEGRITA);
														printf("%-20s|\t%-9s|\t%-14s|\t%-16d|\t%-22.2f\t|\t\t%d\t\t|",automoviles[i].marca,
																																														 automoviles[i].placa,
																																														 automoviles[i].color,
																																														 automoviles[i].potencia,
																																														 automoviles[i].capacidad_de_tanque,
																																														 automoviles[i].velocidad_maxima);
													}
												}
												break;
										}

									}

									printf(_TAMARILLO _NEGRITA "\n\nPresione Enter para regresar al menu principal: ");
									while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
									{}
									break;
			case SOBRE:
									while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salto de linea */

									printf(_FBLANCO _TNEGRO _NEGRITA"I N T E G R A N T E S  D E L  E Q U I P O\n\n"_ARESET);
									printf(_TCYAN _NEGRITA"%-30s|%-37s|", "NOMBRE", "	E-MAIL");
									printf("\n---------------------------------------------------------------------\n"_ARESET);
									printf(_NEGRITA _TBLANCO"%-31s|%-37s|\n", "Diana Karina Vázquez Aguilar", "dian24V@hotmail.com");
									printf("%-31s|%-37s|\n", "Noé Enriquez Antonio", "noeenriquez1998@gmail.com");
									printf("%-31s|%-37s|\n", "Edson Osnart Santos Zaráte", "santosedsonSIS@gmail.com");
									printf("%-33s|%-37s|\n", "Jesús Hernández Jiménez", "jesushernandezjimenez1998@gmail.com");
									printf("%-30s|%-40s|\n", "Aldair Manzano Sanchez", "aldairmanzanosanchez@gmail.com"_ARESET);
									printf(_TAMARILLO _NEGRITA "\n\nPresione Enter para regresar al menu principal: ");


									while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
									{}
									break;
			case SALIR:
								system("clear");              /* Antes de terminar la ejecucion del programa, limpia la pantalla */
								exit(0);                      /* Termina la ejecucion del programa                               */

	 }
	}while(opcion != SALIR);

	return 0;

}
