#include "math.h"


int powerInt(int number, int expoent) {
  int result = 1;
  
  for(unsigned int counter = 0; counter < expoent; counter++) result = result * number;
  
  return result;
}
