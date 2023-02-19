#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'find operating system type'
 *
 * Return: Always 1 (Success)
 */

int main(void)
{

char *win32_1 = "Size of a char: 1 byte(s)\nSize of an int: 4 byte(s)\n";
char *win32_2 = "Size of a long int: 4 byte(s)\n";
char *win32_3 = "Size of a long long int: 8 byte(s)\n";
char *win32_4 = "Size of a float: 4 byte(s)\n";
char *win64_1 = "Size of a char: 1 byte(s)\nSize of an int: 4 byte(s)\n";
char *win64_2 = "Size of a long int: 8 byte(s)\n";
char *win64_3 = "Size of a long long int: 8 byte(s)\n";
char *win64_4 = "Size of a float: 4 byte(s)\n";

#ifdef _WIN64
printf("%s%s%s%s", win64_1, win64_2, win64_3, win64_4);
#elsedef
printf("%s%s%s%s", win32_1, win32_2, win32_3, win32_4);
#endif
return (0);
}
