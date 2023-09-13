#include <unistd.h>
#include "main.h"
/**
 * times_table - times_table function description
 */
void times_table(void)
{
int x, y;
for (x = 0; x < 10; x++)
{
for (y = 0; y < 10; y++)
{
int z = x * y;
_putchar(z);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
