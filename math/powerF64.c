#include "../include/math.h"

// needs a better implementation to allow this operation, seems to be not precise enough
f64 powerF64(const f64 number, const f64 expoent) {
  f64 result = 1;
  
  for(i32 counter = 0; counter < expoent; counter++) result = result * number;
  
  return result;
}
