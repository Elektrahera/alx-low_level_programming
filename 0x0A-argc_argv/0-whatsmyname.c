#include "main.h"
#include <stdio.h>

/**
 * Write a program that prints its name, followed by a new line
 * main: name the program
 * @argc: number of arguments
 * @argv: name
 * Return nothing
 */
int main(int argc, char *argv[])
{
  printf("argc = %d\n", argc);
  printf("argv[0]=%s\n",argv[0]);

  return 0;
}
