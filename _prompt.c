#include "shell.h"
/**
 * _prompt- print the prompt of shell
 *
 **/
void _prompt(void)
{
	if (isatty(STDIN_FILENO))
	{
		_putchar('#');
		_putchar('c');
		_putchar('i');
		_putchar('s');
		_putchar('f');
		_putchar('u');
		_putchar('n');
		_putchar('$');
	}
}
