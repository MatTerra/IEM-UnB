#ifndef ULTRA_H
#define ULTRA_H

#include <Arduino.h>

class Ultra{
  public: 
    Ultra(int trigger, int echo);
    float medir();
    	
    
  private:
    int Trigger, Echo;		
};


#endif