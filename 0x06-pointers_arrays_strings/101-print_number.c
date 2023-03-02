#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int u, v, count;

	if (n < 0)
	{
		_putchar(45);
		u = v * -1;
	}
	else
	{
		u = v;
	}

	d = u;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((u / count) % 10) + 48);
	}
}
