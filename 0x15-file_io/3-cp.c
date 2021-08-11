#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: the arguments passed
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int file_from, file_to;
int byts = 1024, num = 0;
char buf[1024];

if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
| S_IRGRP | S_IWGRP | S_IROTH);
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(file_from), exit(99);
}
while (byts == 1024)
{
byts = read(file_from, buf, 1024);
if (byts == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
num = write(file_to, buf, byts);
if (num < byts)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}

if (close(file_from) == -1)
dprintf(STDERR_FILENO, "Error: Can't close file_from %d\n", file_from),
exit(100);

if (close(file_to) == -1)
dprintf(STDERR_FILENO, "Error: Can't close file_from %d\n", file_to),
exit(100);
 
return (0);
}
