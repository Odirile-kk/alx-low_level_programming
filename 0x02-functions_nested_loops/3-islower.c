#include "main.h"

/**
 * islower - returns 1 if char is lowercase
 * 
 * Return: 1 if lowercase, 0 otherwise
 **/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
