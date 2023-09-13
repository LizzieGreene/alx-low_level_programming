#include <unistd.h>
#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print_to_98 function description
 * @n: param
 */
void print_to_98(int n)
{
int x;
if (n < 98)
{
for (x = n; x <= 98 ; x++)
{
printf("%d", x);
if (x == 98)
{
continue;
}
printf(", ");
}
printf("\n");
}
else if (n > 98)
{
for (x = n; x >= 98 ; x--)
{
printf("%d", x);
if (x == 98)
{
continue;
}
printf(", ");
}
printf("\n");
}
else
{
printf("98");
printf("\n");
}
}
