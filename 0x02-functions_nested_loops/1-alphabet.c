#include "main.h"
/**
 * main -  prints the alphabet, in lowercase, followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
