#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'prinf the var'
 *
 * Return: Always 1 (Success)
 */

int main() 
{

  char*win32 = "Size of a char: 1 byte(s)\nSize of an int: 4 byte(s)\nSize of a long int: 4 byte(s)\nSize of a long long int: 8 byte(s)\nSize of a float: 4 byte(s)\n";
  
  char*win64 = "Size of a char: 1 byte(s)\nSize of an int: 4 byte(s)\nSize of a long int: 8 byte(s)\nSize of a long long int: 8 byte(s)\nSize of a float: 4 byte(s)\n";

  
#ifdef _WIN32
	  printf("%s", win32);
#else
	  printf("%s", win64);
#endif
	return 0;
}