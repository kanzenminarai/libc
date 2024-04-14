#include "../include/math.h"

i64 powerI64(const i64 number, const i64 expoent) {
  i64 result = 1;
  
  for(i64 counter = 0; counter < expoent; counter++) result = result * number;
  
  return result;
}
