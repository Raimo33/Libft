/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <craimond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:16:00 by craimond          #+#    #+#             */
/*   Updated: 2023/10/14 10:23:43 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int	main(void)
{
	int n = 0;
	char *set = malloc(sizeof(char) * n);

	ft_memset(set, 'H', n);
	for (int i = 0; i < n; i++)
		write(1, &set[i], 1);
	free(set);
}*/

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n-- > 0)
		ptr[n] = c;
	return (s);
}
