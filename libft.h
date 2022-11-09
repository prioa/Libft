/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubsky <pdubsky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:45:26 by pdubsky           #+#    #+#             */
/*   Updated: 2022/11/05 15:06:11 by pdubsky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>


int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);

int				ft_toupper(int c);
int				ft_tolower(int c);


void			*ft_memset(void *s, int c, size_t n);
void            *ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
void            *ft_memmove(void *dst, const void *src, size_t len);
void			ft_bzero(void *s, size_t n);



size_t			ft_strlen(const char *s);