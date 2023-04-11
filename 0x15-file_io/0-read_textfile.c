#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 *   prints it to the POSIX standard output.
 * @filename: Given filename to read/write.
 * @letters: the number of letters to read/write.
 *
 * Return: returns the actual number of letters it
 *   could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fl, size, Bcount;
char *buffer;

if (filename == NULL)
return (0);

  /* open file to read only mode */
fl = open(filename, O_RDONLY);
if (fl == -1)
return (0);

  /* declaring a buffer for the wanted file chars */
buffer = malloc(letters);
if (buffer == NULL)
return (0);

  /* count the amount of bytes (chars) added to buffer */
Bcount = read(fl, buffer, letters);

  /* count each char writen from the buffer */
size = write(STDOUT_FILENO, buffer, Bcount);
if (size != Bcount)
return (0);

 /* close file */
close(fl);
free(buffer);

return (size);
}
