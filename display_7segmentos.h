#ifndef __DISPLAY_7SEGMENTOS_H__
#define __DISPLAY_7SEGMENTOS_H__

#include <Arduino.h>

extern uint8_t pinA, pinB, pinC, pinD, pinE, pinF, pinG, pinP;

// Función para configurar display de 7 segmentos: los parámetros son los pines
void configurarDisplay(uint8_t segA, uint8_t segB, uint8_t segC, uint8_t segD, uint8_t segE, uint8_t segF, uint8_t segG, uint8_t segP);

// Función para desplegar un número en el display
void desplegarDisplay(uint8_t numero);

// Función para desplegar el punto en el display
void desplegarPunto(uint8_t punto);

#endif // __DISPLAY_7SEGMENTOS_H__
