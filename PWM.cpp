#include "PWM.h"

// Función para configurar el PWM (canal, frecuencia, resolución, pin)
void configurarPWM(uint8_t canalPWM, uint16_t freqPWM, uint8_t resPWM, uint8_t pinPWM){
    
    ledcSetup(canalPWM, freqPWM, resPWM);
    // Especificar GPIO donde la señal saldrá
    ledcAttachPin(pinPWM, canalPWM);
    // Establecer ciclo de trabajo
    ledcWrite(canalPWM, 0);
}
