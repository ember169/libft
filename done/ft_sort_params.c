/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <lgervet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 15:28:39 by lgervet           #+#    #+#             */
/*   Updated: 2025/09/24 18:15:43 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char	bubble_sort(char *arr)
{
	int swap;
	int	i;
	int	tmp;

	tmp = 0;
	i = 0;
	swap = 1;
	while (swap != 0)
	{
		while (arr[i])
		{
			swap = 0;
			if (ft_strcmp(&arr[i], &arr[i + 1]) < 0)
			{
				tmp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = tmp;
				swap++;
			}
			i++;
		}
		i = 0;
	}
	return (&arr);
}

int	main(int argc, char *argv[])
{
	ft_putstr(bubble_sort(&argv));
}
