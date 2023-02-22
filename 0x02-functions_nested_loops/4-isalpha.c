#include "main.h"

/**
 * _isalpha - Checks for alphabet character
 * @C: The caharacter to be checked
 * Return: 1 for alphabet character or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

