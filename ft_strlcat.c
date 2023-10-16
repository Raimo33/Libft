/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <craimond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:46:10 by craimond          #+#    #+#             */
/*   Updated: 2023/10/14 16:01:56 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	n = dst_len;
	if (size == 0)
		return (src_len);
	while (src[i] && n + i < size - 1)
	{
		dst[i + n] = src[i];
		i++;
	}
	dst[i + n] = '\0';
	if (size < dst_len)
		return (size + src_len);
	return (dst_len + src_len);
}

// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	dst_l;
// 	size_t	src_l;

// 	i = ft_strlen(dst);
// 	dst_l = ft_strlen(dst);
// 	src_l = ft_strlen(src);
// 	j = 0;
// 	if (size <= 0)
// 		return (src_l + size);
// 	while (src[j] != '\0' && i < (size - 1))
// 	{
// 		dst[i] = src[j];
// 		i++;
// 		j++;
// 	}
// 	dst[i] = '\0';
// 	if (size < dst_l)
// 		return (src_l + size);
// 	else
// 		return (dst_l + src_l);
// }
