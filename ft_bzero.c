/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <craimond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:25:09 by craimond          #+#    #+#             */
/*   Updated: 2023/10/14 10:34:27 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n-- > 0)
		ptr[n] = '\0';
}
/*
int	main(void)
{
	size_t n = 3;
	char *set = malloc(n);

	ft_bzero(set, n);
	for (int i = 0; i < n; i++)
		write(1, &set[i], 1);
	free(set);
}*/