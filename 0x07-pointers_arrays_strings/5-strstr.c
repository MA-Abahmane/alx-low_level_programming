#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: Given string
 * @needle: given string of letters to search for its 
 * first occurence
 * Return: return the first occurence
 */

char *_strstr(char *haystack, char *needle)
{
char* str = strstr(haystack, needle);
return (str);
}

