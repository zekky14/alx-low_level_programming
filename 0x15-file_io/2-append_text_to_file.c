#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filnm: filename.
 * @txt_contnt: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filnm, char *txt_contnt)
{
int fd;
int nletters;
int rwr;

if (!filnm)
return (-1);

fd = open(filnm, O_WRONLY | O_APPEND);

if (fd == -1)
return (-1);

if (txt_contnt)
{
for (nletters = 0; txt_contnt[nletters]; nletters++)
;

rwr = write(fd, txt_contnt, nletters);

if (rwr == -1)
return (-1);
}

close(fd);

return (1);
}
