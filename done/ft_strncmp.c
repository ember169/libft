/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <lgervet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 17:02:48 by lgervet           #+#    #+#             */
/*   Updated: 2025/09/23 14:25:29 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	s1[] = "hello";
	char	s2[] = "hella";
	unsigned int	n;

	n = 10;
	printf("%d ", ft_strncmp(s1, s2, n));
}*/
