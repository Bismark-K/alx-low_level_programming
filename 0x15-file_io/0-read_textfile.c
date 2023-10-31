#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @letters: counts of letters to read and print
 * @filename: text file to be read
 *
 * Return: actual counts of letters (Success) and 0 (Failure)
 * Author: dz1dzor
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bfr;
	int file_txt;
	ssize_t rd_chk, le_cnt;

	if (!filename)
		return (0);

	file_txt = open(filename, O_RDONLY);

	if (file_txt == -1)
		return (0);

	bfr = malloc(letters * sizeof(char));
	if (!bfr)
	{
		free(bfr);
		return (0);
	}

	rd_chk = read(file_txt, bfr, letters);
	if (rd_chk == -1)
		return (0);

	le_cnt = write(STDOUT_FILENO, bfr, rd_chk);
	if (le_cnt == -1)
		return (0);

	free(bfr);
	close(file_txt);

	return (le_cnt);
}
