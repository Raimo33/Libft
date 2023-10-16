/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <craimond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:29:46 by craimond          #+#    #+#             */
/*   Updated: 2023/10/15 11:40:23 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
int	main(void)
{
	char *src = malloc(10);
	char *dst = src + 2;

	src[0] = 'C';
	src[1] = 'i';
	src[2] = 'a';
	src[3] = 'o';
	src[4] = '!';

	printf("prima di copiare, source: %s, dest: %s\n", src, dst);
	ft_memcpy(dst, src, 5);
	printf("dopo la copia, source: %s, dest: %s\n", src, dst);
}*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest_ptr = (char *)dest;
	src_ptr = (const char *)src;
	while (n-- > 0)
		dest_ptr[n] = src_ptr[n];
	return (dest);
}
