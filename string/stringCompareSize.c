#include "../include/string.h"

i32 stringCompareSize(str target, str source, u32 size) {
  u32 counter = 0, comparedStrings = 0;
  
  while(target[counter] == source[counter] && target[counter]) if(counter < size) counter++;
  comparedStrings = target[counter] - source[counter];
  
  return comparedStrings;
}
