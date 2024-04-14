#include "../include/math.h"
#include "../include/types.h"

i32 powerI32(const i32 number, const i32 expoent) {
  i32 result = 1;
  
  for(i32 counter = 0; counter < expoent; counter++) result = result * number;
  
  return result;
}

