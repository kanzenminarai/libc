#ifndef STRING_H
#define STRING_H

#define NULL_PTR (void*)0
#define NULL_TERMINATOR '\0'

int asciiToInteger(char *string);
unsigned int stringLength(char *string);
int stringCompare(char *target, char *source);
char* stringCopy(char *target, char *source);
char* stringCopySize(char *target, char *source, unsigned int size);

#endif // STRING_H