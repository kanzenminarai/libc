#include "math.h"
 
double powerDouble(double number, double expoent) {
  double result = 1;
  
  for(unsigned int counter = 0; counter < expoent; counter++) result = result * number;
  
  return result;
}
