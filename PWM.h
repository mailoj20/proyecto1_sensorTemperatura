#ifndef __PWM_H__
#define __PWM_H__

#include <Arduino.h>
#include <driver/ledc.h>

// Función para configurar el PWM (canal, frecuencia, resolución, pin)
void configurarPWM(uint8_t canalPWM, uint16_t freqPWM, uint8_t resPWM, uint8_t pinPWM);

#endif // __PWM_H__
