#include "main.h"

/**
 * _strstr - man
 * compare - static
 * @needle : pointer
 * @haystack : pointer
 * @X : x
 * @Y : y
 * Return: char
 */


int compare(const char *X, const char *Y)
{
    while (*X && *Y)
    {
        if (*X != *Y) {
            return 0;
        }
 
        X++;
        Y++;
    }
 
    return (*Y == '\0');
}

char *_strstr(char *haystack, char *needle)
{
	if (needle[0] == '\0')
		return (haystack);
	 while (*haystack != '\0')
    {
        if ((*haystack == *needle) && compare(haystack, needle)) {
            return haystack;
        }
        haystack++;
    }
 
    return NULL;
}
