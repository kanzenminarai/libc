#include "../include/string.h"

str stringCopySize(str *target, str *source, u32 size) {
  u32 counter = 0, sizeOfString = size, targetSize = 0, sourceSize = 0;
  
  while(source[sourceSize] != '\0') sourceSize++;
  while(target[targetSize] != '\0') targetSize++;
  if(size > sourceSize) sizeOfString = sourceSize;
  if(size > targetSize) sizeOfString = targetSize;
  for(counter = 0; counter < sizeOfString; counter++) target[counter] = source[counter];
  target[counter] = '\0';
  
  return target;
}
