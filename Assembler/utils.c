#include "utils.h"
#include "globals.h"
#include <stdlib.h>
#include <string.h>

char end_error = 0;

char * copyString(char * s)
{ int n;
  char * t;
  if (s==NULL) return NULL;
  n = strlen(s)+1;
  t = malloc(n);
  if (t!=NULL) strcpy(t,s);
  return t;
}


