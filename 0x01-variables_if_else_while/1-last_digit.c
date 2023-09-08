#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function description
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (abs(n % 10) == 0)
{
printf("Last digit of %d is 0 and is zero\n", n);
}
else if (abs(n % 10) > 5)
{
int a = abs(n % 10);
printf("Last digit of %d is %d and is greater than 5\n", n, a);
}
else
{
int a = abs(n % 10);
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
}
return (0);
}
