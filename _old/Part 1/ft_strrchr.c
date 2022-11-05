/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubsky <pdubsky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:49:30 by pdubsky           #+#    #+#             */
/*   Updated: 2022/10/03 15:43:13 by pdubsky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    while (i >= 0)
    {
        if (s[i] == c)
            return (s + i);
        i--;
    }
    return (0);
}


int main(){
    char *test = "Hey wie gehts";
    int test2 = 'e';
    printf("result = %s\n", ft_strrchr(test, test2));
}