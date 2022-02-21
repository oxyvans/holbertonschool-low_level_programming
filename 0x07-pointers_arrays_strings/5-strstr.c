#include "main.h"
/**
 * compare - man
 * @X : pointer
 * @Y : pointer
 * Return: int
 */
int compare(const char *X, const char *Y)
{
while (*X && *Y)
{
if (*X != *Y)
{
return (0);
}
X++;
Y++;
}
return (*Y == '\0');
}
/**
 * _strstr - man
 * @needle : pointer
 * @haystack : pointer
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
if (needle[0] == '\0')
	return (haystack);
while (*haystack != '\0')
{
if (((*haystack == *needle) && compare(haystack, needle)))
return (haystack);
haystack++;
}
return (NULL);
}
