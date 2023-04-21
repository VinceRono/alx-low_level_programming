#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: If fails or filename is NULL - -1.
 *         If file does not exist or write permissions lacking - -1.
 *         else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, ln = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, ln);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
