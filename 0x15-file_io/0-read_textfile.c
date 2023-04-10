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
	ssize_t let, w, file;
  
	char *text;

	text = malloc(letters);
  
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

  
	if (file == -1)
	{
    
		free(text);
		return (0);
	}

	let = read(file, text, letters);

	w = write(STDOUT_FILENO, text, let);

	close(file);

	return (w);
}
