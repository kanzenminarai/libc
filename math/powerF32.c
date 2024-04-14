#include "../include/math.h"

// needs a better implementation to allow this operation, seems to be not precise enough
f32 powerF32(const f32 number, const f32 expoent) {
  f32 result = 1;
  
  for(i32 counter = 0; counter < expoent; counter++) result = result * number;
  
  return result;
}
