#ifndef MENU_H_
#define MENU_H_

void mostrarMenu(void);
void menu(int);


enum OPCIONES{INGRESAR = 1,
               MOSTRAR,
               ACTUALIZAR,
               ELIMINAR,
               SALIR};

void mostrarMenu(void)
{
  system("clear");
  puts("");
  printf("M E N U  D E  O P C I O N E S\n");
  printf("1. Ingresar\n");
  printf("2. Mostrar\n");
  printf("3. Actualizar\n");
  printf("4. Eliminar\n");
  printf("5. Salir\n\n");
}
void menu(int opc)
{
  int c;
  switch (opc) {
    case INGRESAR:
                  printf("Usted se encuentra en la opción Ingresar\n");
                  while(getchar() != '\n');
                  printf("\nPresione la tecla enter para salir\n");
                  while((c=getchar()) != '\n')
                  {}
                  break;
    case MOSTRAR:
                  printf("Usted se encuentra en la opción Mostrar\n");
                  while(getchar() != '\n');
                  printf("\nPresione la tecla enter para salir\n");
                  while((c=getchar()) != '\n')
                  {}
                  break;
    case ACTUALIZAR:
                    printf("Usted se encuentra en la opción Actualizar\n");
                    while(getchar() != '\n');
                    printf("\nPresione la tecla enter para salir\n");
                    while((c=getchar()) != '\n')
                    {}
                    break;
    case ELIMINAR:
                  printf("Usted se encuentra en la opción Eliminar\n");
                  while(getchar() != '\n');
                  printf("\nPresione la tecla enter para salir\n");
                  while((c=getchar()) != '\n')
                  {}
                  break;
    case SALIR:
                  printf("Usted se encuentra en la opción Salir\n");
                  while(getchar() != '\n');
                  printf("\nPresione la tecla enter para salir\n");
                  while((c=getchar()) != '\n')
                  {}
                  break;
  }
}

#endif
