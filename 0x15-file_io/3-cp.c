#include "main.h"

void exitFile(int d_file);
void cp_file(char *src, char *dest);

/**
 * main - entry point
 * @argv: list or passed arguments
 * @argc: counts of arguments
 *
 * Return: Always 0 (Success)
 * Author: dz1dzor
*/
int main(int argc, char *argv[])
{
	int thr = 3;

	if (argc != thr)
	{
		dprintf(STDERR_FILENO, "Usage: copy from_fl to_fl\n");
		exit(97);
	}
	cp_file(argv[1], argv[2]);

	return (0);
}

/**
 * cp_file - copies to a file, contents of another file
 * @src: source
 * @dest: destination
 *
 * Return: -1 (Failure), 1 (Success)
*/
void cp_file(char *src, char *dest)
{
	char bfr[1024];
	int from_fl, to_fl, wrt_to, rd_from;

	from_fl = open(src, O_RDONLY);
	if (from_fl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	to_fl = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_fl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
	}

	while ((from_fl = read(from_fl, bfr, 1024)) > 0)
	{
		wrt_to = write(to_fl, bfr, rd_from);
		if (wrt_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", dest);
			exit(99);
		}

		if (rd_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
			exit(98);
		}
		exitFile(from_fl);
		exitFile(to_fl);
	}
}
/**
 * exitFile - exits the file
 * @d_file: file description
*/
void exitFile(int d_file)
{
	int ext;

	ext = close(d_file);
	if (ext == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", d_file);
		exit(100);
	}
}
