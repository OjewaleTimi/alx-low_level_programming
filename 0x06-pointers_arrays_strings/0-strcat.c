#include "main.h"

/**
 *_strcat - concatenates  the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{
int i = 0 ;
int destLength = 0;
while(dest[i++]){
  
destLength++;
for (i = 0, src[i] , i++)
    dest[destLength++] = src[i];
    return dest;

} 
