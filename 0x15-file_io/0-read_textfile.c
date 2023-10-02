#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filnm: filename.
 * @lettrs: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filnm, size_t lettrs)
{
int fd;
ssize_t nrd, nwr;
char *buf;

if (!filnm)
return (0);

fd = open(filnm, O_RDONLY);

if (fd == -1)
return (0);

buf = malloc(sizeof(char) * (lettrs));
if (!buf)
return (0);

nrd = read(fd, buf, lettrs);
nwr = write(STDOUT_FILENO, buf, nrd);

close(fd);

free(buf);

return (nwr);
}
