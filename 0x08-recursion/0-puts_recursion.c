#include "main.h"
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
    printf("%s", s);

}


int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
