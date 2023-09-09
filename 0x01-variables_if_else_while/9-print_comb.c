#include <stdio.h>
/**
 * main - main function description
 * Return: Always 0 (Success)
 */
int main(void)
{
int x, n;
for (x = 0; x < 10; x++)
{
putchar(48 + x);
for (n = 0; n < 1; n++)
{
if (x == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
