#include "main.h"

/**
* _islower - checks whether or  not a character is lower case
* Return: 1 if its lowercase or 0 otherwise
*@c: integer representing ascii value of character
*/
int _islower(int c)
{
	char i;
	int islower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			islower = 1;
	}
	return (islower);
}

