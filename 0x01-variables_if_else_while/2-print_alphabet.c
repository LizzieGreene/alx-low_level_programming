#include <stdio.h>
/**
 * main - main function description
 * Return: Always 0 (Success)
 */
int main(void)
{
int x = 'a';
for (x = 'a'; x <= 'z'; x++)
{
int lower_x = x;
putchar(lower_x);
}
putchar('\n');
return (0);
}
