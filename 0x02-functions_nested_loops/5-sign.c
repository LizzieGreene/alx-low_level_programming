#include <unistd.h>
#include "main.h"
/**
 * print_sign - print_alphabet function description
 * @n: param
 * Return: 1 if islower 0 is not or -1 otherwise
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
