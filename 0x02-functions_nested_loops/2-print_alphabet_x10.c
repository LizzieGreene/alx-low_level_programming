#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print_alphabet_x10 function description
 */
void print_alphabet_x10(void)
{
int y;
for (y = 0; y < 10; y++)
{
char x = 'a';
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
