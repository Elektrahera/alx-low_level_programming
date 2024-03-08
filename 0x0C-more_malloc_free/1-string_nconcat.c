#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatnate two strings with n bytes
 * @s1: pointer first string
 * @s2: pointer second string
 * @n: int type for size of byte
 *
 * Return: pointer to new memory allocated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
       
 char *pointer;
 unsigned int m, v, len_1, len_2;

  if (s1 == NULL)
	 s1 = "";
  if (s2 == NULL)
	 s2 = "";

  for (len_1 = 0; s1[len_1] != '\0'; len_1++)
    ;
  for (len_2 = 0; s2[len_2] != '\0'; len_2++)
    ;
	
  pointer = malloc(len_1 + n + 1);
  if (pointer == NULL)
    {
     return (NULL);
    }

   for (m = 0; s1[m] != '\0'; m++)
    pointer[m] = s1[m]

   for (v = 0; v < n; v++)
     {
      pointer[m] = s2[v];
         m++;
     }
       pointer[m] = '\0';
      return (pointer);
	  
}
