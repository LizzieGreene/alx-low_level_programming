#include <unistd.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - print_alphabet function description
 * @c: character param
 * Return: 1 if islower 0 is not
 */
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
