#include "main.h"
/**
* print_last_digit - a function that prints the last digit of a number
* @n: number's last digit result
* Return: value of the last digit
*/
int print_last_digit(int n)
{
	int c;

	c = (n % 10);

	if (c < 0)
	{
		c = (-1 * c);
	}

	_putchar(c + '0');
	return (c);
}
