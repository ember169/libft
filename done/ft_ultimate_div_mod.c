/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <lgervet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:31:22 by lgervet           #+#    #+#             */
/*   Updated: 2025/09/12 10:27:23 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 2;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("%d | %d", a, b);
}*/
