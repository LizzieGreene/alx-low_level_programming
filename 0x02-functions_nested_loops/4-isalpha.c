#include <unistd.h>
#include <ctype.h>
#include "main.h"
/**
 * _isalpha - print_alphabet function description
 * @c: character param
 * Return: 1 if islower 0 is not
 */
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
