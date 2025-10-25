#include <string.h>
void *ft_memove(void *dst, const void *src, size_t len)
{
	unsigned char		*destination;
	const unsigned char	*source;
	unsigned char		buffer[len];
	size_t				i;

	destination = (unsigned char *) dst;
	source = (const unsigned char *) src;
	i = 0;
	while (i < len)
	{
		buffer[i] = source[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		destination[i] = buffer[i];
		i++;
	}
	return (dst);
}

#include <stdio.h>
int	main(void)
{
	int dst1[10];
	const int arr[10] = {1,2,3,4,5,6,7,8,9,0};
	size_t len = sizeof(arr);
	ft_memove(dst1, arr, len);
	size_t i = 0;
	while (i < len)
	{
		printf("%d ", dst1[i]);
		i++;
	}
	printf("\n");

	return(0);

}
