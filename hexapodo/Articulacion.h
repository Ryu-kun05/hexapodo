#ifndef __ARTICULACION_H__
#define __ARTICULACION_H__

#include <Servo.h> 

#define GRADO_INICIO 90

class Articulacion {
  private:
    Servo servo;
    int pin;

  public:
    Articulacion(const int pinArg); 
    bool mueveGrado(const int gradoDestino);
                                                                                        
                                    
};

#endif
