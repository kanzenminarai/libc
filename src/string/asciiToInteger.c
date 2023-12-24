#include "string.h"
#define POSITIVE 1
#define NEGATIVE -1
#define BASE_TEN 10

int asciiToInteger(char *string) {
  unsigned int convertedString = 0;
  unsigned short int counter = 0;
  char signal = POSITIVE;
  if(string != NULL_PTR) {
    if(string[0] == '-') counter++, signal = NEGATIVE;
    for(unsigned short int counter; string[counter] != '\0'; counter++)
      if(string[counter] >= '0' && string[counter] <= '9')
        convertedString = (convertedString * BASE_TEN) + (string[counter] - '0');
  }
  else convertedString = 0;
  return convertedString * signal;
}