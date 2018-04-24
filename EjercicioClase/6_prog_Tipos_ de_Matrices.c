/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de creación: 22/04/2018                              */
/* Fecha de actualización: 23/04/2018                         */
/* Descripción: Programa que define 3 tipos de matrices,      */
/*              (cuadrada, columna y rectangular).            */
/*------------------------------------------------------------*/



/* Declaración de bibliotecas */
#include <stdio.h>



/* Declaración de la función principal */
int main(void)
{
    /* Se declara una matriz cuadrada de tipo entero */
    int array[4][4]= {0, 1, 2, 3,
                      4, 5, 6, 7,
                      8, 9, 0, 1,
                      2, 3, 4, 5
                        };
    printf(" Matriz Cuadrada\n");
    for(int i= 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("|%d|", array[i][j]);
        }
        printf("\n");
    }
    /* Se declara una matriz columna de tipo caracter */
    char array2[4][1]= {'A',
                        'B',
                        'C',
                        'D'};
    printf("\n");
    printf("Matriz Columna\n");
    for(int x = 0; x < 4; x++)
    {
        for(int y = 0; y < 1;y++)
        {
            printf("|%c|", array2[x][y]);
        }
        printf("\n");
    }
    /* Se declara una matriz rectangular de tipo real */
    float array3[3][6]={
                        1.1, 1.2, 1.3, 1.4, 1.5, 1.6,
                        2.1, 2.2, 2.3, 2.4, 2.5, 2.6,
                        3.1, 3.2, 3.3, 3.4, 3.5, 3.6
                      };
    printf("\n");
    printf("Matriz Rectangular\n");
    for(int w = 0; w < 3; w++)
    {
        for(int z = 0; z < 6; z++)
        {
            printf("|%1.1f|", array3[w][z] );
        }
        printf("\n");
    }

    return 0;
}
