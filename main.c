#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
#include "string.h"
#include "math.h"

int main() {
  char string[20];
  scanf("%s", string);
  char *str = "abacatinho fofo";
  stringCopy(string, str);
  printf("%s\n", string);

  return 0;
}
