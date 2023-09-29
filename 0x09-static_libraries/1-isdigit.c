/**
 * _isdigit - checks to see if input is a digit between 0 - 9
 *
 * @c: input anything
 *
 * Return: 1 if it is a digit but 0 if it's not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

