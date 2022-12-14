/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubsky <pdubsky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:12:12 by pdubsky           #+#    #+#             */
/*   Updated: 2022/11/05 15:48:08 by pdubsky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t     i;
	
	if (!s)
		return (NULL);
    if (!(substr = malloc(sizeof(char) * (len + 1))))
      	return (NULL);
    i = 0;
    if (start < ft_strlen(s)){
      	while (len > i)
      	{
          	substr[i] = s[start + i];
        	i++;
    	}
    }
    substr[i] = '\0';
	return (substr);
}
