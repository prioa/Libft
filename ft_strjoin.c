/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubsky <pdubsky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:12:08 by pdubsky           #+#    #+#             */
/*   Updated: 2022/11/05 15:10:46 by pdubsky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t j;

    size_t full_size;
    
    char *str;

    if (!s1 || !s2)
            return (0);

    full_size = ft_strlen(s1) + ft_strlen(s2) + 1;
    if (!(str = malloc(sizeof(char) * full_size)))
        return (0);

    i = 0;
    while (i < ft_strlen(s1)){
        str[i] = s1[i];
        i++;
    }
    j = 0;
    while (j < ft_strlen(s2)){
        str[i] = s2[j];
        j++;
        i++;
    }
    str[i] = '\0';
    return (str);
}