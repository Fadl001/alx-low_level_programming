#include "main.h"
#include <stdio.h>

/**
 * _isuper - checks for uppercase character
 * @c: Variable text
 * Return: Always 0
 */

int _isuper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
