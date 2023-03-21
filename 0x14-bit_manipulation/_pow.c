/**
 * _pow - sdfgdfg
 * @i: sdfgdsfg 
 * @b: asdfgsdfg
 * Return: sdfgds
 */
unsigned int _pow(unsigned int i, unsigned int b)
{
	unsigned int num = i;
	unsigned int c = 1;

	if (b == 0)
	{
		return (1);
	}

	while (c < b)
	{
		num = num * i;
		c++;
	}

	return (num);
}
