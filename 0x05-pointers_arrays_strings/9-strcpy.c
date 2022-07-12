#include "main.h"
#include <string.h>

/**
 * *_strcpy - is main func
 * @dest: is tghe var
 * @src: is the var
 * Return: success 0
 */
char *_strcpy(char *dest, char *src)
{
char *a = dest;
while (*src)
*dest++ = *src++;
return (a);
}
