#include "main.h"

/**
  * set_string - Sets the value of a pointer to char
  * @s: the value to modify
  * @to: the value to assign
  *
  * Return: Always 0 (Success)
  */
void set_string(char **s, char *to)
{
	*s = to;
}
