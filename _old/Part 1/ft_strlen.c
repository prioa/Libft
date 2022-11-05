/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubsky <pdubsky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:45:04 by pdubsky           #+#    #+#             */
/*   Updated: 2022/10/03 14:38:22 by pdubsky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (i < s[i])
        i++;
    return (i);
}

int main(){
    int test = ft_strlen("hey");
    printf("length: %d\n", test);
}