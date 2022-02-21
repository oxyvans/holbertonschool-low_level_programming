#include "main.h"

/**
 * _strstr - man
 * @needle : pointer
 * @haystack : pointer
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
    while (*haystack != '\0')
    {
        if ((*haystack == *needle) && compare(haystack, needle)) {
            return haystack;
        }
        haystack++;
    }
 
    return NULL;
}
