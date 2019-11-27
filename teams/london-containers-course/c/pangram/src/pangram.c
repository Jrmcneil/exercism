#include "pangram.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>



bool is_pangram(const char *sentence)
{
  char *alphabet;
  alphabet = calloc(26, sizeof(char));
  int i;
  int k = 0;
  if (sentence == NULL || *sentence == '\0')
  {
    free(alphabet);
    return false;
  }

  for(i = 0; *(sentence + i) != '\0'; ++i)
  {
    char letter = *(sentence + i);
    if (letter >= 'a' && letter <= 'z')
    {
    if (*(alphabet + letter - 'a') != letter)
        {
          *(alphabet + letter - 'a') = letter;
          ++k;
        }
    }

    if (letter >= 'A' && letter <= 'Z')
    {
    if (*(alphabet + letter - 'A') != letter + 'a' - 'A')
        {
          *(alphabet + letter - 'A') = letter + 'a' - 'A';
          ++k;
        }
    }
  }
  free(alphabet);
  return k == 26;
}
