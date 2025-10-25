void *ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	byte;
	size_t			i;

	p = (unsigned char *) b;
	byte = (unsigned char) c;
	i = 0;
	while (i < len)
	{
		p[i] = byte;
		i++;
	}
	return (b);
}
