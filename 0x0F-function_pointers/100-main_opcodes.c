#include <stdio.h>
#include <stdlib.h>

/**
*main - prints opcode of own main function
*@argc: argument count
*@argv: array of arguments
*Return: 1 or 2 on fail, 0 on success
*/
int main(int argc, char *argv[])
{
	int i, (*a)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	printf("%.2x", *(unsigned char *)a);
	a++;
	for (i = 1; i < atoi(argv[1]); i++)
	{
		printf(" %.2x", *(unsigned char *)a);
		a++;
	}
	printf("\n");
	return (0);
}
