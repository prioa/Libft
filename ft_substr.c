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

    substr = (char*)malloc(sizeof(*s) * (len + 1));

    i = 0;
    while (len > i)
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = 0; 
    return (substr);
}
