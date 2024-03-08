#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - reallocate memory size function
 * @ptr: pointer to address of old memory location
 * @old_size: unsigned int type old memory size
 * @new_size: unsigned int type new memory size
 * Return:  return pointer to array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;

	if (new_size == old_size)
        {
                return (ptr);
        }
	if (new_size > old_size)
	{
		str = malloc(new_size);
		free(ptr);
		return (str);
	}
	if (ptr == NULL)
	{
		str = malloc(new_size);
		free(ptr);
		return (str);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
