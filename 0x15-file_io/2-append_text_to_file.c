#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and if file exists,
 * and -1 on failure and if file does not exist or if no permission
 * to write file
 * If file_content is NULL, do not add anything to the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	int b;
	int length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, length);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
