/**
 * _isupper - check to see if c is in upper
 *
 * @c: alphabet input
 *
 * Return: 1 if it's uppercase but 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

