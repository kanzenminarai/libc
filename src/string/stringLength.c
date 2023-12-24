#include "string.h"

unsigned int stringLength(char *string) {
  unsigned int sizeOfString = 0;
  while(string[sizeOfString] != '\0') sizeOfString++;
  return sizeOfString;
}