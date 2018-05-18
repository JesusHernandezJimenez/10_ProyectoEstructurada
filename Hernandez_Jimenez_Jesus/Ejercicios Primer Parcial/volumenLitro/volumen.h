#ifndef VOLUMEN_H_
#define VOLUMEN_H_

#define LITROS 1000
float capacidadtanque(float, float, float);

float capacidadtanque(float altura, float largo, float ancho)
{
  return (((largo * ancho)*altura) * LITROS);
}

#endif
