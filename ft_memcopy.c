/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcopy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubsky <pdubsky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:11:42 by pdubsky           #+#    #+#             */
/*   Updated: 2022/11/05 14:12:11 by pdubsky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *memcpy(void *restrict dest, const void *restrict src, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        *(char*)(dest + i) = *(char*)(src + i);
    }
    return (dest);
}