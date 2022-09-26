#include "main.h"
#include <stdio.h>

/**
*memset- fills byte to a constant
*char *s- prints the address of the variable
*unsigned int (n)
*
Return: a pointer to the memory area @s
*/

 char *_memset(char *s, char b, unsigned int n)
 {
      unsigned int n;
      
     for(i=0; i < n ; i++)
 `   {
           s[i] = b;
     }
     
     return (s);
     
}
