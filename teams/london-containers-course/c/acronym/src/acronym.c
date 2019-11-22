#include "acronym.h"
#include <string.h>
#include <stdlib.h>

char* abbreviate(const char* phrase)
{
  char* acronym = malloc(10 * sizeof(char));;
  int i;
  int k = 0;
  for(i = 0; phrase[i] != '\0'; ++i)
  {
    if (i == 0 || strcmp(" ", &phrase[i-1]))
    {
      acronym[k] = phrase[i];
      ++k;
    }
  }
    acronym[k] = '\0';
    return (char*)acronym;
}
