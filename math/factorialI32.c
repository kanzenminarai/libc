#include "../include/math.h"

i32 factorialI32(const i32 value) {
  i32 result = value;
  
  if(value <= 1) return 1;
  for(i32 i = 1; i < value; i++) result *= i;
  
  return result;
}

