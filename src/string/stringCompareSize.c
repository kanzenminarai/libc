#include "string.h"

int stringCompareSize(char *target, char *source, unsigned int size) {
  unsigned int counter = 0, comparedStrings = 0;
  
  while(target[counter] == source[counter] && target[counter]) if(counter < size) counter++;
  comparedStrings = target[counter] - source[counter];
  
  return comparedStrings;
}
