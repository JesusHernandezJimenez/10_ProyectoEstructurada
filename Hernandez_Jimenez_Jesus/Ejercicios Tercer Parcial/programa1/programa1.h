#ifndef FIGURAS_H_
#define FIGURAS_H_

void dibujarFigura1(int);
void dibujarFigura2(int);
void dibujarFigura3(int);
void dibujarFigura4(int);
void dibujarFigura5(int);
void dibujarFigura6(int);
void dibujarFigura7(int);
void dibujarFigura8(int);
void dibujarFigura9(int);

void dibujarFigura1(int tam)
{
  printf("\nFIGURA 1\n");
  for(int i = 0; i < tam; i ++)
  {
    for(int j = 0; j < tam; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}

void dibujarFigura2(int tam)
{
  printf("\nFIGURA 2\n");
  for(int i = 0; i < tam; i ++)
  {
    for(int j = 0; j < tam; j++)
    {
      if(i == 0 || i == (tam-1) || j == 0 || j == (tam-1))
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
}

void dibujarFigura3(int tam)
{
  printf("\nFIGURA 3\n");
  for(int i = 0; i < tam; i ++)
  {
    for(int j = 0; j < tam; j++)
    {
      if((i == 0 || i == j) || j == 0 || j == (tam - 1))
      {
        printf("*");
      }else if(j == ((tam -1) - i) || i == (tam - 1))
      {
        printf("*");
      }else{
        printf(" ");
      }
    }
    printf("\n");
  }
}

void dibujarFigura4(int tam)
{
  printf("\nFIGURA 4\n");
  for(int i = 0; i < tam ; i ++)
  {
    for(int j = 0; j < tam; j++)
    {
      if(i == j || i == ((tam-1)-j))
      {
        printf("*");
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }
}

void dibujarFigura5(int tam)
{
  printf("\nFIGURA 5\n");
  for(int i = 0; i < tam ; i ++)
  {
    for(int j = 0; j < tam; j++)
    {
      if( i + j < tam )
      {
        printf("*");
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }
}

void dibujarFigura6(int tam)
{
  printf("\nFIGURA 6\n");
  for(int i = 0; i < tam ; i ++)
  {
    for(int j = 0; j < tam; j++)
    {
      if( i + j >= (tam-1) )
      {
        printf("*");
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }
}

void dibujarFigura7(int tam)
{
  printf("\nFIGURA 7\n");
  for(int i = 0; i < tam ; i ++)
  {
    for(int j = 0; j < tam; j++)
    {
      if(i == j || i == ((tam-1)-j)|| i == 0 || i == (tam-1))
      {
        printf("*");
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }
}

void dibujarFigura8(int tam)
{
  printf("\nFIGURA 8\n");
  for(int i = 0; i < tam ; i ++)
  {
    for(int j = 0; j < tam; j++)
    {
      if(i == j || i < j)
      {
        printf("*");
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }
}

void dibujarFigura9(int tam)
{
  printf("\nFIGURA 9\n");
  for(int i = 0; i < tam ; i ++)
  {
    for(int j = 0; j < tam; j++)
    {
      if(i == j || i > j)
      {
        printf("*");
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }
}

#endif
