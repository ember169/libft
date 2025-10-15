/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <lgervet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:33:17 by lgervet           #+#    #+#             */
/*   Updated: 2025/09/23 14:47:00 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int res;

	i = 0;
	res = 1;
	if (nb == 0 && power == 0)
		return (1);
	else if (power == 0)
		return (0);
	while (i < power)
	{
		res *= nb; 
		i++;
	}
	return (res);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(5, 5));
}
