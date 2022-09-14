#include "main.h"

/**
*_isalpha - check whether or not a character ia n alphabeth
*Return: 1 if the character is a letter, lowercase or uppercase. 0 otherwis
*@c:ascii value
*/
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
		if (c == lower || c == upper)
		isletter = 1;
		}
	}
	return (isletter);
}
