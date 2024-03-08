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
	int point, point1;
	int sign_ = n;
	char *pointer;
	int len_1, len_2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len_1 = 0; s1[len_1] != '\0'; len_1++)
		;
	for (len_2 = 0; s2[len_2] != '\0'; len_2++)
		;

	if (sign_ >= len_2)|
	{
		sign_ = len_2;
		pointer = malloc(sizeof(char) * (len_1 + len_2 + 1));
	}
	else
		pointer = malloc(sizeof(char) * (len_1 + n + 1));
	if (pointer == NULL)
		return (NULL);
	for (point = 0; point < len_1; point++)
	{
		pointer[point] = s1[point];
	}
	for (point1 = 0; point1 < sign_; point1++)
	{
	       pointer[point++] = s2[point1];
	}
	pointer[point++] = '\0';
	return (pointer);
}
