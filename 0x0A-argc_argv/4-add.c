#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program to add two positive numbers
 * @argc: num of arguments passed
 * @argv: string array passed
 * Return: 0 for succes and 1 for error
 */
int main(int argc, char *argv[])
{
	int x, y;
	int sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}

