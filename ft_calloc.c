/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubsky <pdubsky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:11:58 by pdubsky           #+#    #+#             */
/*   Updated: 2022/10/09 14:00:55 by pdubsky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void    *ft_calloc(size_t nitems, size_t size)
{
	size_t	full;
	void	*dest;

	full = size * nitems;
	if (!(dest = malloc(full)))
		return (0);
	ft_memset(dest, 0, full);
	return (dest);
}