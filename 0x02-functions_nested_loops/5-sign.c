#include "main.h"
/**
* print_sign - a function that prints the sign of a number
* @c: number input
* Return: 1 prints '+' if c > 0, 0 prints '0' if c = 0, -1 prints '-' if c < 0
*/
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
