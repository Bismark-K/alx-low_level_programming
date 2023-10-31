#include "main.h"

/**
 * create_file - function that creates a file
 * @text_content: text to be written to the file
 * @filename: the file's name
 *
 * Return: -1 on failure, 1 on success
 * Author: dz1dzor
*/
int create_file(const *filename, char *text_content)
{
	int fl, wtstat, wrd;

	wrd = 0;
	if (!filename)
		return (-1);

	fl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fl == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	if (text_content != NULL)
	{
		while (text_content[wrd])
			wrd++;

		wtstat = write(fl, text_content, wrd);
		if (wtstat == -1)
			return (-1);
	}

	close(fl);
	return (1);
}
