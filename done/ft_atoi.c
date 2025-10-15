/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <lgervet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 13:52:49 by lgervet           #+#    #+#             */
/*   Updated: 2025/09/24 15:52:57 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	ret;

	ret = 0;
	i = 0;
	sign = 0;
	while (str[i] >= '\t' && str[i] <= '\r' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign += 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + (str[i] - '0');
		i++;
	}
	if (sign % 2 == 0)
		ret *= -1;
	return (ret);
}

/*#include <stdio.h>
int	main(void)
{
	char str[] = "    ----+-1234ab567";
	printf("%d", ft_atoi(str));
}*/
