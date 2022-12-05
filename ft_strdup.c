/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubsky <pdubsky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:12:06 by pdubsky           #+#    #+#             */
/*   Updated: 2022/11/05 14:17:06 by pdubsky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup( const char *str1 )
{
	char *str2;

	if (!(str2 = (char *)malloc(ft_strlen(str1) + 1)))
		return (0);
	ft_memcpy(str2, str1, ft_strlen(str1) + 1);
	return (str2);
}