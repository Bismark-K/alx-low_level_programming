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

	fl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fl == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[wrd] != '\0')
			wrd++;

		wtstat = write(fl, text_content, wrd);
		if (wtstat == -1)
			return (-1);
	}

	/**
	* if (!text_content)
	*	text_content = "";
	*/
	close(fl);
	return (1);
}
