#ifndef NUMEROPARIMPAR_H_
#define NUMEROPARIMPAR_H_

void numeropar(int);
void numeroPos_Neg(int);

void numeroPos_Neg(int n)
{
  if(n < 0)
  {
    printf("El número es negativo\n");
  }
  else
  {
    printf("El número es positivo\n");
  }
}
void numeropar(int n)
{
  if((n % 2) == 0)
  {
    printf("El número %d es par\n", n);
  }
  else
  {
    printf("El número %d es impar\n", n);
  }
}

#endif
