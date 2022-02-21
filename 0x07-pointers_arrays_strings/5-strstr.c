#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
 * @needle : pointer
 * @haystack : pointer
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, j, flag = 0;
while (*haystack)
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
return (0);
}
