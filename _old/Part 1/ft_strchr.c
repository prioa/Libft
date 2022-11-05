/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubsky <pdubsky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:41:25 by pdubsky           #+#    #+#             */
/*   Updated: 2022/10/03 15:39:25 by pdubsky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char *strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return (s + i);
        i++;
    }
    return (0);
}

int main(){
    char *test = "Hey wie gehts";
    int test2 = 'e';
    printf("result = %s", strchr(test, test2));
}