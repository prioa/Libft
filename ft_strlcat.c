/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubsky <pdubsky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:46:19 by pdubsky           #+#    #+#             */
/*   Updated: 2022/10/09 15:11:21 by pdubsky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t     ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t	i;
    size_t	res;

    i = 0;
    if (size > 0)
    {
        while (*dst && i < size)
        {
            ++dst;
            ++i;
        }
    }
    res = ft_strlcpy(dst, src, size - i);
    return (res + i);
}