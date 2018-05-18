#ifndef VOTACION_H_
#define VOTACION_H_

void votacion(int);

void votacion(int edad)
{
  if (edad >= 18)
  {
    printf("Usted puede votar\n");
  }
  else
  {
    printf("Usted no puede votar\n");
  }
}

#endif
