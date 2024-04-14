#include "../include/math.h"

// cannot get the fraction of the approximate value
f64 squareRootF64(f64 number) {
  f64 result = 0;
  i32 i = 0;
  
  for(; i < number; i++) {
    result = i * i;
    if(result == number) break;
  }

  return i;
}
