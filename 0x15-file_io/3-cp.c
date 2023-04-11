#include "main.h"


int main(int argc, char *argv[])
{
FILE *fileFrom, *fileTo;
size_t bread, bwrite;
char buffer[1024];

if (argc != 3)
{
printf("Usage: cp file_from file_to\n");
exit(97);
}

  /* Open origin file to read in binary mode */
fileFrom = fopen(argv[1], "rb");
if (fileFrom == NULL)
{
printf("Error: Can't read from file %s\n", argv[1]);
exit(98);
}

  /* Open destination file to write in binary mode */
fileTo = fopen(argv[2], "wb");
if (fileTo == NULL)
{
printf("Error: Can't write to %s\n", argv[2]);
exit(99);
}


/* copy the content of the origin file to the destination one*/
  /* Now we read from fileTo (origin) to the buffer */
  /* then we write the buffer content to the fileTO (destination) */
while ((bread = fread(buffer, 1, 1024, fileFrom)) > 0)
{
bwrite = fwrite(buffer, 1, bread, fileTo);

if (bwrite != bread)
{
printf("Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

if (ferror(fileFrom))
{
printf("Error: Can't read from file %s\n", argv[1]);
exit(98);
}

if (fclose(fileTo) == EOF)
{
printf("Error: Can't close fd %s\n", argv[2]);
exit(100);
}

if (fclose(fileFrom) == EOF)
{
printf("Error: Can't close fd %s\n", argv[1]);
exit(100);
}

return (0);
}
