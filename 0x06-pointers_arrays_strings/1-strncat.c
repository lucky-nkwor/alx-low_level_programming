#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: dest of string
 */
char *_strcat(char *dest, char *src)
{
int index = 0, i;
while (dest[index])
{
index++;
}
for (i = 0; src[i] != 0; i++)
{
dest[index] = src[i];
index++;
}
dest[index] = '\0';
return (dest);
}
