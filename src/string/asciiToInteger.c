#include "string.h"
#define POSITIVE 1
#define NEGATIVE -1
#define BASE_TEN 10

int stringToInteger(char *source) {
  unsigned int convertedString = 0;
  unsigned short int counter = 0;
  char signal = POSITIVE;
  
  if(source[0] == '-') counter++, signal = NEGATIVE;
  while(source[counter] != '\0') {
    if(source[counter] >= '0' && source[counter] <= '9')
    convertedString = (convertedString * BASE_TEN) + (source[counter] - '0');
    counter++;
  }
  
  return convertedString * signal;
}
