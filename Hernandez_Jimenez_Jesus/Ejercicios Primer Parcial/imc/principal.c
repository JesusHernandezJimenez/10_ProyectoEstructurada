#include <stdio.h>
#include "calculo.h"

int main(void)
{
  float estatura, peso;
  printf("Proporciona la estatura del paciente: ");
  scanf("%f", &estatura);
  printf("Proporciona el peso del paciente: ");
  scanf("%f", &peso);

  printf("\nEl indice de masa corporal del paciente es de: %2.2f\n", imc(estatura, peso));

  return 0;
}
