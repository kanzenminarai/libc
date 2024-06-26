#include "../include/string.h"

str stringCopy(str target, str source) {
  u32 counter = 0, sizeOfString = 0, targetSize = 0, sourceSize = 0;
  
  while(source[sourceSize] != '\0') sourceSize++;
  while(target[targetSize] != '\0') targetSize++;
  if(sourceSize > targetSize) sizeOfString = targetSize;
  else sizeOfString = sourceSize;
  for(counter = 0; counter < sizeOfString; counter++) target[counter] = source[counter];
  target[counter] = '\0';
  
  return target;
}
