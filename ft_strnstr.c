/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubsky <pdubsky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:11:58 by pdubsky           #+#    #+#             */
/*   Updated: 2022/10/09 14:00:55 by pdubsky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;

    if (*needle == 0)
        return ((char*)haystack);

    i = ft_strlen(needle);
    while (*haystack != '\0' && i <= len)
    {
        if (*haystack == *needle && ft_strncmp(haystack, needle, i) == 0)
            return ((char *) haystack);
        haystack++;
        len--;
    }
    return (0);
}
