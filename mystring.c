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

char * mystrncat( char *dest, char *source, int n) {
    int i = 0;
    while (*dest) {
        dest++;
        i++;
    }
    while (n && *source && i < n + mystrlen(dest)) {
        *dest = *source;
        source++;
        i++;
        dest++;
        n--;
    }
    dest -= i;
    return dest;
}

int mystrcmp( char *s1, char *s2 ) {
  while (*s1 || *s2) {
      if (*s1 == '\0') {
          return -10;
      }
      if (*s2 == '\0') {
          return 10;
      }
      if (*s1 != *s2) {
          if (*s1 < *s2) {
              return -10;
          }
          else {
              return 10;
          }
      }
      s1++;
      s2++;
  }
  return 0;
}

// Solution to finding character in a string
char * mystrchr( char *s, char c ) {
    while (*(s++)) {
        if (*s == c) {
            return s;
        }
    }
    return NULL;
}
