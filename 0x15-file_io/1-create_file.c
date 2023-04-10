#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: Given filename.
 * @text_content: text to write in the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
int mkF;

if (filename == NULL)
return (-1);

  /* open new file to write mode, then set permission to "rw-------" */
mkF = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (mkF < 0)
return (-1);

  /* write in file */
if (text_content != NULL)
{
write(mkF, text_content, strlen(text_content));
close(mkF);
return (1);
}
else
close(mkF);

return (1);
}
