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


char *ft_strjoin(char const *s1, char const *s2)
{
    char *result;
    size_t i;
    size_t s1_length;
    size_t s2_length;
    size_t result_length;

    s1_length = ft_strlen(s1);
    s2_length = ft_strlen(s2);
    result_length = s1_length + s2_length + 1;

    result = malloc(sizeof(char *) * result_length);
    i = 0;
    while (s1_length >= 0){
        result[i] = s1[i];
        s1_length--;
    }

    return (result);

}