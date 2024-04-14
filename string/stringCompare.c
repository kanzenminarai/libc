#include "../include/string.h"

i32 stringCompare(str target, str source) {
  u32 counter = 0, comparedStrings = 0;
  
  while(target[counter] == source[counter] && target[counter]) counter++;
  comparedStrings = target[counter] - source[counter];
  
  return comparedStrings;
}
