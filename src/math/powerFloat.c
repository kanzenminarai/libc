#include "math.h"

float powerFloat(float number, float expoent) {
  float result = 1;
  
  for(unsigned int counter = 0; counter < expoent; counter++) result = result * number;
  
  return result;
}
