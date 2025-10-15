/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <lgervet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:12:33 by lgervet           #+#    #+#             */
/*   Updated: 2025/09/23 12:41:06 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	return (res);
}

/*#include <stdio.h>
int	main()
{
	int	nb = 10;
	printf("%d! = %d", nb, ft_iterative_factorial(nb));
}*/
