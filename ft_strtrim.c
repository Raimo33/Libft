/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <craimond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:57:33 by craimond          #+#    #+#             */
/*   Updated: 2023/10/13 14:02:22 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cinstr(const char *str, const char c);
/*
int	main(void)
{
	char *str1 = "My name is Simon";
	char *set = "";

	printf("nuova stringa: %s\n", ft_strtrim(str1, set));
}*/

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*newstr;
	size_t	i;

	i = 0;
	while (*s1 != '\0' && ft_cinstr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i > 0 && ft_cinstr(set, s1[i - 1]))
		i--;
	newstr = malloc(sizeof(char) * (i + 1));
	if (newstr == NULL)
		return (NULL);
	newstr[i] = '\0';
	while (i > 0)
	{
		newstr[i - 1] = s1[i - 1];
		i--;
	}
	return (newstr);
}

static int	ft_cinstr(const char *str, const char c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}
