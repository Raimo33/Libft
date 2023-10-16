/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <craimond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:47:40 by craimond          #+#    #+#             */
/*   Updated: 2023/10/14 10:52:05 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;
	size_t		i;

	dest_ptr = (char *)dest;
	src_ptr = (const char *)src;
	if (dest_ptr == src_ptr)
		return (dest);
	if (src_ptr < dest_ptr)
	{
		i = n + 1;
		while (--i > 0)
			dest_ptr[i - 1] = src_ptr[i - 1];
	}
	else
	{
		i = -1;
		while (++i < n)
			dest_ptr[i] = src_ptr[i];
	}
	return (dest);
}
/*
int main(void)
{
	char *src = "lorem ipsum dolor sit amet";
	char *dst = src + 1;

	ft_memmove(dst, src, 8);
	write(1, dst, 22);
}*/
