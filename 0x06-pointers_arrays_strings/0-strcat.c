#include "main.h"

/**
 * *_strcat - Entry point of the function
 * @dest: destination parameter
 * @src: source parameter to copy
 * Return: character of concatenated strings
 **/

char *_strcat(char *dest, char *src)
{
int i, j;
while (*(dest + i) != '\0')
i++;
while (true)
{
*(dest + i) = *(src + j);
if (*(src + j) == '\0')
break;
i++;
j++;
}
return (dest);
}
