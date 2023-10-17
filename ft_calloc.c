/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <craimond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:53:20 by craimond          #+#    #+#             */
/*   Updated: 2023/10/17 15:42:37 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (nmemb != 0 && size > ULONG_MAX / nmemb)
		return (NULL);
	else if (nmemb == 0 && (size * nmemb) > ULONG_MAX)
		return (NULL);
	arr = (void *)malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, size * nmemb);
	return (arr);
}
