#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that the number of arguments passed into it
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
   int a, b, result;

   if( argc != 3) {
    printf("Error\n");
    return 1;
   }

   a = atoi(argv[1]);
   b = atoi(argv[2]);
   result = a * b;

   printf("%i", result);

	return (0);
}
