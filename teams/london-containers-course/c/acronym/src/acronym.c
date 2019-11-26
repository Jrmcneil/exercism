#include "acronym.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *acronym;
char *abbreviate(const char *phrase)
{
  int i;
  int k = 0;
  acronym = malloc(10*sizeof(char));

  if (phrase != NULL && *phrase != '\0') {
  for (i = 0; *(phrase + i) != '\0'; ++i)
  {
    if (i == 0 || *(phrase + i - 1) == ' ' || *(phrase + i - 1) == '-')
    {
      char value = *(phrase + i);
      if (value >= 'a' && value <= 'z')
      {
        value -= 32;
      }
      acronym[k] = value;
      ++k;
    }
  }
    acronym[k] = '\0';
    return &acronym[0];
  }
  free(acronym);
  return NULL;
}
