#include "main.h"

/**
 * main - entry point for the program
 * a program that prints _putchar, followed by a new line
 * Return: nothing to return
 */

int main(void)
{
	char putchar[] = "_putchar";
	int i = 0;

	while (putchar[i] != '\0')
	{
		_putchar(putchar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
