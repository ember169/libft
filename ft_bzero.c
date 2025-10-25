void ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
	return	;
}
#include <stdio.h>
int	main(void)
{
	char str[] = "lorem";
	printf("%s\n", str);
	ft_bzero(str, sizeof(str));
	printf("%s\n", str);
}
