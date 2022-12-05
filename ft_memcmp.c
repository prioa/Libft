/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubsky <pdubsky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:12:02 by pdubsky           #+#    #+#             */
/*   Updated: 2022/10/09 14:01:05 by pdubsky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    char *s1_str;
    char *s2_str;

    s1_str = (char *)s1;
    s2_str = (char *)s2;

    if (n == 0)
        return (0);

    i = 0;
    while(s1_str[i] == s2_str[i] && i < n - 1)
            i++;

    return ((unsigned char)s1_str[i] - (unsigned char)s2_str[i]);
}