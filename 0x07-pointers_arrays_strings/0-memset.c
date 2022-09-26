#include "main.h"

/**
*memset- fills byte to a constant
*char *s- prints the address of the variable
*unsigned int (n)
*
Return: a pointer to the memory area @s
*/

 char *_memset(char *s, char b, unsigned int n)
 {
      unsigned int i;
      
     for(i = 0; n > 0 ; i++,n--)
 `   {
           s[i] = b;
     }
     
     return (s);
     
}
