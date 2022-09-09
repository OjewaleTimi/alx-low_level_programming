#include <stdlib.h>
#include <stdio.h>

/*betty style for function main goes there*/
/**
*main - Entry point
*
*Return: Always 0 (Sucess)
*/

int main(void)
{
    int n; 
        
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n > 0)
    {printf ("%i is positive/n",n)}
    else if (n == 0)
    {printf ("%i is zero/n",n)}
    else if (n < 0)
    {printf ("%i is negative/n",n)}
}
