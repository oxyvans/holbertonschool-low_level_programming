#include "main.h"

/**
 * _strstr - man
 * @needle : pointer
 * @haystack : pointer
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, j, flag = 0;
if (needle[0] == '\0')
return (haystack);

while (*haystack != '\0')
{
	for (j = 0; needle[j] != '\0'; j++)
	if (haystack[i] == needle[j])
	{
		flag = 1;
		i++;
	}
	else
	{
		flag = 0;
		i = 0;
	}
	if (flag == 1)
	break;
haystack++;
}
if (flag == 1)
return (haystack);
else
return ('\0');
}
