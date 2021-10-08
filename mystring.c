#include <stdio.h>

int mystrlen(char *s) {
  int toRet = 0;
  while (*s) {
    toRet++;
    s++;
  }
  return toRet;
}

char * mystrcpy(char *dest, char *source) {
  char *destNew = dest;
  while (*source) {
    *dest = *source;
    dest++;
    source++;
  }
  return destNew;
}
