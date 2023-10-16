/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <craimond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:07:38 by craimond          #+#    #+#             */
/*   Updated: 2023/10/14 16:08:33 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new_str;

	i = -1;
	new_str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new_str == NULL)
		return (NULL);
	while (s[++i] != '\0')
		new_str[i] = f(i, s[i]);
	new_str[i] = '\0';
	return (new_str);
}
/*
char	*ft_toupper(unsigned int index, char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int 	main(void)
{
	const char *str = "cacca";
	char *new_str = ft_strmapi(str, &ft_toupper);
	printf("new string: %s\n", new_str);
}*/