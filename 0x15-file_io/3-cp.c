#include "main.h"
/**
 * main - a program that copies the content of a
 *    file to another file.
 * @argv: given main parameters array.
 * @argc: array size.
 *
 * Return: 0 on success, exit on failur.
 */
int main(int argc, char *argv[])
{
int fileFrom, fileTo, bwrite = 0, bread = 1024;
char buffer[1024];


if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
}
  /* Open origin file to read only mode */
fileFrom = open(argv[1], O_RDONLY);
if (fileFrom == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
  /* Open destination file to write only mode */
  /* set fileTo permission to "rw-rw-r--" (664 in octal notation) */
fileTo = open(argv[2], (O_WRONLY | O_CREAT | O_TRUNC), (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH));
if (fileTo == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}

/* copy the content of the origin file to the destination one*/
  /* Now we read from fileTo (origin) to the buffer */
  /* then we write the buffer content to the fileTO (destination) */
while (bread == 1024)
{
bread = read(fileFrom, buffer, 1024);
if (bread == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
bwrite = write(fileTo, buffer, bread);
if (bwrite < bread)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}


if (close(fileTo) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileTo);
exit(100);
}

if (close(fileFrom) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileFrom);
exit(100);
}


return (0);
}
