#include "main.h"

/**
 * append_text_to_file - Entry point
 * @filename: name of the file.
 * @text_content: Text content
 *
 * Return: fails or NULL - -1.
 *         not exist or permission denied -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, l);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}

