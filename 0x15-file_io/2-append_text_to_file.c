#include "main.h"

int _strlen(char *s);
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file
 * @text_content:  NULL terminated str to wr to the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{

int fd, wr;
int can;

if (filename == NULL)
return (-1);

fd = open(filename, O_RDWR | O_APPEND, 0600);
if (fd == -1)
return (-1);

if (text_content == NULL && fd)
return (1);

can = _strlen(text_content);
wr = write(fd, text_content, can);
if (wr == -1)
return (-1);

return (1);
}

/**
 * _strlen - length of string
 * @s: string
 *
 * Return: length
 */
int _strlen(char *s)
{
int len = 0;

while (*(s + len) != 0)
{
len++;
}
return (len);
}
