#include "main.h"
/**
 * print_rev - imprime on reversa
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int longi = O;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
