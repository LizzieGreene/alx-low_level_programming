#include <stdio.h>
/**
 * main - main function description
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
for (x = 'z'; x >= 'a'; x--)
{
int lower_x = x;
putchar(lower_x);
}
putchar('\n');
return (0);
}
