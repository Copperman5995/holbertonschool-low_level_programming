/**
 * _isalpha - dfhjgdsbjfjdfnjgjubh
 * @c: c is a ASCII charter
 * Return: return 1 if c is a letter 0 if not
 */
#include "main.h"

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
