#include "main.h"

unsigned int binary_to_uint(const char *b)
{
    unsigned int num;

if (b == NULL)
return (0);

for (num = 0; *b; b++)
{
if (*b == '1')
num = (num << 1) | 1;
else if (*b == '0')
num = num << 1;
else
return (0);
}
return (num);
}
