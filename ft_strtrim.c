/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubsky <pdubsky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:12:11 by pdubsky           #+#    #+#             */
/*   Updated: 2022/10/09 14:01:23 by pdubsky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int		ft_get_start(const char *s, char set)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (set)
			return (i);
		i++;
	}
	return (-1);
}

static int		ft_get_end(const char *s, char set)
{
	int i;

	i = ft_strlen(s) - 1;
	while (i > 0)
	{
		if (set)
			return (i);
		i--;
	}
	return (-1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*res;


	start = ft_get_start(s1, set);
	end = ft_get_end(s1, set);
	res = ft_substr(s1, start, end - start + 1);
	return (res);
}

