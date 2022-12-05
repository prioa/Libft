/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubsky <pdubsky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:13:10 by pdubsky           #+#    #+#             */
/*   Updated: 2022/11/05 14:10:55 by pdubsky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *s)
{
    int i;
    int sign;
    int result;

    result = 0;
    i = 0;
    sign = 1;
    
    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
        i++;

    if (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign = -1;
        i++;
    }

    while (s[i] >= '0' && s[i] <= '9')
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	return (result * sign);
}