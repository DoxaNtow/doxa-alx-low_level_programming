#include <stdio.h>
#include "main.h"
/**
 * main - print the num of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of string arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	/*Ignore argv and print argc*/
	printf("%d\n", argc - 1);

	return (0);

}

