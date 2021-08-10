#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: file
 * @letters: the num of let it should read and print
 * Return: the POSIX standard output
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

int fd, rd, wr;
char *p;

if (filename == NULL)
return (0);

p = malloc(sizeof(char) * (letters));
if (p == NULL)
return ('\0');

fd = open(filename, O_RDONLY);

if (fd == -1)
return (0);

rd = read(fd, p, letters);

if (rd == -1)
return (0);

wr = write(STDOUT_FILENO, p, rd);

if (wr == -1)
return (0);

close(fd);

return (wr);
}
