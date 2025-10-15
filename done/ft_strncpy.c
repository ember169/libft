/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <lgervet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 12:14:55 by lgervet           #+#    #+#             */
/*   Updated: 2025/09/18 15:24:20 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*void	ft_putnstr(char *str, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	dest[] = "";
	char	src[] = "Hello World;"
	unsigned int	n;

	ft_strncpy(&dest[sizeof dest], &src[sizeof src], n);
	ft_putstr(&dest);
}*/
