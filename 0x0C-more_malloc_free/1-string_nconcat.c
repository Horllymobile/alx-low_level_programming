#include "main.h"

/**
 * string_nconcat - Entries a string and a
 * string and concatenates them
 * @s1: First string
 * @s2: Second string
 * @n: Number of characters to copy from s2
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i, j, k;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;

if (n >= j)
n = j;

str = malloc(sizeof(char) * (i + n + 1));
if (str == NULL)
return (NULL);

for (k = 0; k < i; k++)
str[k] = s1[k];
for (k = 0; k < n; k++)
str[i + k] = s2[k];
str[i + k] = '\0';

return (str);
}
