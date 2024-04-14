#include "../include/string.h"

u32 stringLength(str string) {
  u32 sizeOfString = 0;
  
  while(string[sizeOfString] != '\0') sizeOfString++;
  
  return sizeOfString;
}
