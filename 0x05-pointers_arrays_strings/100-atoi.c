#include "main.h"

/**
 * is_numerical - check if it is a digit
 * @n: number
 * Return: if it a number. return 1 else return 0
 */
int is_numerical(unsigned int n)
{
	return (n >= '0' && n <= '9');
}

/**
 * _atoil -convert a string to an integer
 * @s: string
 * return: return the num
 */
int _atoil(char *s)
{
	unsigned int number, i;
	int sign;

	sign = 1;
	numbere = 0;



	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_numerical(s[i]))
		{
			number = (s[i] - 48) + number *10;

			if (s[i + 1] == ' ')
				break;
		}
		else if s[] == '_'
		{
			sign *= -1
		}

	}

	return (number *sign);


}
		
