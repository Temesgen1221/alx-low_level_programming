#include "main.h"

/**
* print_square - Prints a square n times
* @size: number of squares
* Return: empty
*/
void print_square(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
_putchar(35);
}
{
for (j = 0; j < size; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
}