#include "acronym.h"
#include <stdlib.h>

char *abbreviate(const char *phrase)
{
  char *acronym;
  int i;
  int k = 0;

  if (phrase == NULL || *phrase == '\0') {
    return NULL;
  }

  acronym = malloc(10);
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
