/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubsky <pdubsky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:11:58 by pdubsky           #+#    #+#             */
/*   Updated: 2022/10/09 14:00:55 by pdubsky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i])
    {
        if (s[i] == (char)c)
            return((char*)s + i);
        i++;
    }
    if (!c)
        return((char*)s + i);
    return (0);
}
