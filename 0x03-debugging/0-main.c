#include "main.h"

/**
* main - Test function for positive or negative
* Return: 0 positive 1 negative
*/
int main(void)
{
int i;

i = 0;
if (positive_or_negative(i) > 0)
{
printf("%d is positive\n", i);
}
else if (positive_or_negative(i) < 0)
{
printf("%d is negative\n", i);
}
else
{
printf("%d is zero\n", i);
}
}
