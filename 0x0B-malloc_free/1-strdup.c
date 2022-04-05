#include "main.h"
#include <string.h>

/**
 * _strdup - entry point of string duplicator
 * @str: char pointer parameter
 * Return: char
 **/

char *_strdup(char *str)
{
char *new_str;
unsigned int i;

if (str == NULL)
return (NULL);

new_str = malloc(sizeof(char) * (strlen(str) + 1));
if (new_str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
new_str[i] = str[i];
new_str[i] = '\0';

return (new_str);
}
