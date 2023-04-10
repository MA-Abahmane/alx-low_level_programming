#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 *   prints it to the POSIX standard output.
 * @filename: Given filename to read/write
 * @letters: the number of letters to read/write
 *
 * Return: returns the actual number of letters it
 *   could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t size = 0;
char *buffer;

if (filename == NULL)
return (0);
  
  /* open file to read mode */
FILE *Fptr = fopen(filename, "r");
if (Fptr == NULL)
return (0);
  
  /* declaring a buffer for the wanted file chars */
buffer = malloc(letters);
if (buffer == NULL)
return (0);

  /* count the amount of bytes (chars) added to buffer */
ssize_t Bcount = fread(buffer, 1, letters, Fptr);
if (Bcount <= 0)
return (0);
  
  /* count each char printed from the buffer */
size = write(STDOUT_FILENO, buffer, Bcount);

if (size != Bcount)
  return (0);


/* close file */
fclose(Fptr);
  
return (size);
}
