#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: char parameter
 * Return: integer length of a string
 **/
int _strlen(char *s)
{
  int len = 0;
  while (*(s + len) != '\0')
    ++len;
return (len);
}
