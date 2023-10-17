/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <craimond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:21:10 by craimond          #+#    #+#             */
/*   Updated: 2023/10/15 10:22:24 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

// size_t	ft_strlen(const char *c)
// {
// 	size_t	n;

// 	n = 0;
// 	while (c[n])
// 		n++;
// 	return (n);
// }
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = -1;
	if (start > ft_strlen(s))
	{
		substr = malloc(sizeof(char) * 1);
		if (substr == NULL)
			return (NULL);
		*substr = '\0';
		return (substr);
	}
	s += start;
	if (ft_strlen(s) <= len)
		substr = malloc(sizeof(char) * (ft_strlen(s) + 1));
	else
		substr = malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	while (s[++i] != '\0' && i < len)
		substr[i] = s[i];
	substr[i] = '\0';
	return (substr);
}

// int main(void)
// {
// 	char *str = "lorem ipsum dolor sit amet";
// 	char *sub = ft_substr(str, 7, 10);

// 	printf("ft: %s\n", sub);
// 	free(sub);
// }
