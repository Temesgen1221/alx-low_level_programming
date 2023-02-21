#include "main.h"
/**
 * main - write a program print _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *sh = "'_'putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
