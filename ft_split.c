/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubsky <pdubsky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:12:06 by pdubsky           #+#    #+#             */
/*   Updated: 2022/11/05 14:17:06 by pdubsky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_count_parts(const char *str, char set)
{
    size_t  i;
    size_t  parts;

    parts = 0;
    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i + 1] == set || str[i + 1] == '\0') == 1 && (str[i] == set || str[i] == '\0') == 0)
            parts++;
        i++;
    }
    return (parts);
}

static void ft_putword(char *dest, const char *src, char set)
{
    size_t i;

    i = 0;
    while((src[i] == set || src[i] == '\0') == 0)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

static int  ft_free(char **str, int size)
{
    while(size--)
        free(str[size]);
    return (-1);
}

static int  ft_splitter(char **split, const char *str, char set)
{
	int		i;
	int		j;
	int		part;

	part = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == set || str[i] == '\0')
			i++;
		else
		{
			j = 0;
			while ((str[i + j] == set || str[i + j] == '\0') == 0)
				j++;
			if ((split[part] = (char*)malloc(sizeof(char) * (j + 1))) == NULL)
				return (ft_free(split, part - 1));
			ft_putword(split[part], str + i, set);
			i += j;
			part++;
		}
	}
	return (0);
}

char    **ft_split(const char *str, char c)
{
    char **res;
    size_t  parts;

    parts = ft_count_parts(str, c);
    if ((res = (char**)malloc(sizeof(char*) * (parts + 1))) == NULL)
        return (NULL);
	res[parts] = 0;
	if (ft_splitter(res, str, c) == -1)
		return (NULL);
	return (res);
}