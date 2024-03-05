#include "string.h"

char* stringCopySize(char *target, char *source, unsigned int size) {
  unsigned int counter = 0, sizeOfString = size, targetSize = 0, sourceSize = 0;
  
  while(source[sourceSize] != '\0') sourceSize++;
  while(target[targetSize] != '\0') targetSize++;
  if(size > sourceSize) sizeOfString = sourceSize;
  if(size > targetSize) sizeOfString = targetSize;
  for(counter = 0; counter < sizeOfString; counter++) target[counter] = source[counter];
  target[counter] = NULL_TERMINATOR;
  
  return target;
}
