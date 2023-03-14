#include <stdlib.h>
#include <stdio.h>
//#include "main.h"
		
/**
 * **strtow - splits any given string into
 * individual words.
 * @str: given string.
 * Return: Return a pointer to an array of individual words
 * or "NULL" if an error ocured Error.
 */
		
char **strtow(char *str)	
{
char **ar, *t;

int i, j, c, len, count, top, end;

len = 0;
while (*(str + len))
{
len++;
}

count = counter(str);
		
if (count == 0)
{
return (NULL);
}

ar = (char **) malloc(sizeof(char *) * (count + 1));
		
if (ar == NULL)
{	
return (NULL);
}

j = 0;
c = 0;
for (i = 0; i <= len; i++)
{

if (str[i] == ' ' || str[i] == '\0')		
{	
if (c)		
{
end = i;

t = (char *)malloc(sizeof(char) * (c + 1));
		
if (t == NULL)
{
return (NULL);
}

while (top < end)
{
*t++ = str[top++];
}
*t = '\0';	
ar[j] = (t - c);
	
++j;
c = 0;	
}	
}

else if (c++ == 0)
{
top = i;
}
}

ar[j] = NULL;
	
return (ar);	
}

/**	
 *counter - a function used to count the number of words in a  given string
 *@s: given string
 *Return: number of words found
 */
		
int counter(char *str)		
{	
int i, x, f;
f = 0, x = 0;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ')
{
f = 0;
}
else if (f == 0)
{
f = 1;
++x;
}
}

return (x);		
}
