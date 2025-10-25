#include <string.h>
void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *destination;
	unsigned char *source;
	size_t			i;

	destination = (unsigned char *) dst;
	source = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dst);
}

/*#include <stdio.h>
int	main(void)
{
	int	arr[10] = {0,1,2,3,4,5,6,7,8,9};
	int	dst[10];
	size_t n = 10;
	ft_memcpy(&dst, arr, n);

	size_t	i = 0;
	while (i < n)
	{
		printf("%d ", *dst);
		i++;
	}
	printf("\n");
	char dst[6];
	const char *str = "Lorem";
	size_t n = 6;
	ft_memcpy(&dst, str, n);
	printf("%s", dst);
	return (0);
}*/
