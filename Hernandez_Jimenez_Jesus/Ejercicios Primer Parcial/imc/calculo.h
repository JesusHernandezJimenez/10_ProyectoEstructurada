#ifndef CALCULO_H_
#define CALCULO_H_

float imc(float altura, float peso);

float imc(float altura, float peso)
{
  return (peso / (altura * altura));
}

#endif
