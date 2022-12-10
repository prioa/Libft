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


static int		ft_check_char(char c, char const *set)
{
	size_t i;

	i = 0;
	while(set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*res;

	start = 0;
	while(s1[start] && ft_check_char(s1[start], set))
		start++;
	
	end = ft_strlen(s1);
	while(end > start && ft_check_char(s1[end - 1], set))
		end--;
	res = (char*)malloc(sizeof(*s1) * (end - start + 1));
	if (!res)
		return (0);
	i = 0;
	while (start < end)
		res[i++] = s1[start++];
	res[i] = '\0';
	return (res);

}

