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

  if (*phrase) {
  for(i = 0; *(phrase + i) != '\0'; ++i)
  {
    if (i == 0 || phrase[i - 1] == ' ')
    {
      acronym[k] = *(phrase + i);
      ++k;
    }
  }
    acronym[k] = '\0';
    return &acronym[0];
  }
  void *null = NULL;
  acronym[0] = &null;
  return &acronym[0];
}
