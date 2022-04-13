#include "3-calc.h"
/**
 * get_op_func - Get the op func object
 * @s: The operator
 * Return: int(*)(int, int)
 */
int (*get_op_func(char *s))(int, int)
{
int (*f)(int, int);
if (s == NULL)
return (NULL);
if (s[0] == '+')
f = &op_add;
else if (s[0] == '-')
f = &op_sub;
else if (s[0] == '*')
f = &op_mul;
else if (s[0] == '/')
f = &op_div;
else if (s[0] == '%')
f = &op_mod;
else
f = NULL;
return (f);
}
