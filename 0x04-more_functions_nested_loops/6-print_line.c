#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * followed by a new line.
 * @n: An input integer
 * Result: Always 0
 *
 * Return: void
 */
void print_line(int n)
{
int i = 0;
if (n > 0)
{
for (; i < n; i++)
_putchar('_');
}
_putchar('\n');
}
