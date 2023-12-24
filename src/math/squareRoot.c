#include "math.h"

// needs rework
double squareRoot(double number) {
  unsigned int count = 0;
  while(count * count != number && count * count < number) count++;
  return count;
}