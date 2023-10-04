#include "main.h"

/**
 * create_file - prog that creates a file.
 * @filename: pointer to the file name
 * @text_content: printer to the string
 *
 * Return: -1 or 1
 */
int create_file(const char *filename, char *text_content)
{
	int jd, w, lengt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lengt = 0; text_content[lengt];)
			lengt++;
	}

	jd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(jd, text_content, lengt);

	if (jd == -1 || w == -1)
		return (-1);

	close(jd);

	return (1);
}
