#include "main.h"
/**
 * *_strchr - Entry point of the function
 * @s: first pointer parameter
 * @c: second char parameter
 * Return: s or NULL
 **/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
}
return (NULL);
}
