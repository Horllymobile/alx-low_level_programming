#include "main.h"

/**
 * str_concat - Entry point
 * @s1: string 1
 * @s2: string 2
 * Return: char*
 */
char *str_concat(char *s1, char *s2)
{
char *new_str;
unsigned int i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

new_str = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
if (new_str == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
new_str[i] = s1[i];
for (j = 0; s2[j] != '\0'; j++)
new_str[i + j] = s2[j];
new_str[i + j] = '\0';

return (new_str);
}
