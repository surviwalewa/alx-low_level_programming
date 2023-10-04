#include "main.h"

/**
 * append_text_to_file - prog that appends text at d end of a file.
 * @filename: pointer of filename
 * @text_content: string of the file end
 *
 * Return: function fails -1, user lacks permision -1, otherwise 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, lengt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lengt = 0; text_content[lengt];)
			lengt++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, lengt);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
