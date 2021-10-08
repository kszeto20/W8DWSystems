#include <stdio.h>

int mystrlen(char *s) {
  int toRet = 0;
  while (*s) {
    toRet++;
    s++;
  }
  return toRet;
}
