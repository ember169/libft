/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <lgervet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:48:14 by lgervet           #+#    #+#             */
/*   Updated: 2025/09/23 15:08:54 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (nb == 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, --power));
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_recursive_power(5, 5));
}*/
