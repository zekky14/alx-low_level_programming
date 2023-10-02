#include "main.h"

/**
 * create_file - creates a file
 * @filnm: filename.
 * @txt_contnt: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filnm, char *txt_contnt)
{
int fd;
int nletters;
int rwr;

if (!filnm)
return (-1);

fd = open(filnm, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (fd == -1)
return (-1);

if (!txt_contnt)
txt_contnt = "";

for (nletters = 0; txt_contnt[nletters]; nletters++)
;

rwr = write(fd, txt_contnt, nletters);

if (rwr == -1)
return (-1);

close(fd);

return (1);
}
