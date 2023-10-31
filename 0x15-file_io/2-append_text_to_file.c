#include "main.h"

/**
 * append_text_to_file - adds a text at the end of a file
 * @text_content: text to append to the file
 * @filename: name of the file
 *
 * Return: 1 (Success), -1 (Failure)
 * Author: dz1dzor
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int apto, txt_add, n_txt;

	n_txt = 0;
	if (!filename)
		return (-1);

	apto = open(filename, O_WRONLY | O_APPEND);
	if (apto == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[n_txt])
			n_txt++;

		txt_add = write(apto, text_content, n_txt);
		if (txt_add == -1)
		{
			close(apto);
			return (-1);
		}
	}
	close(apto);
	return (1);
}
