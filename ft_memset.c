/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubsky <pdubsky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:12:05 by pdubsky           #+#    #+#             */
/*   Updated: 2022/11/05 14:52:16 by pdubsky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    char *string;
    
    i = 0;
    string = (char *) s;
    while (i < n)
    {
        string[i] = c;
        i++;
    }
    return (s);
}
