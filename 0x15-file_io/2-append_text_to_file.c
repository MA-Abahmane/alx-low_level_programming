#include "main.h"

/**
 * create_file - a function that appends text at
 *   the end of a file.
 * @filename: Given filename.
 * @text_content: text to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
FILE *Fptr;
char *txt;

if (filename == NULL)
return (-1);

  /* open file and set it to append mode*/
Fptr = fopen(filename, "a");
if (Fptr == NULL)
return (-1);

  /* write in file */
txt = text_content;
if (txt != NULL)
fputs(txt, Fptr);

  /* close file  */
fclose(Fptr);

return (1);
}
