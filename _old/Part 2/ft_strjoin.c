/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubsky <pdubsky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:46:21 by pdubsky           #+#    #+#             */
/*   Updated: 2022/10/03 17:30:03 by pdubsky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    char *str;

    i = 0;
    while(s1[i] != '\0')
    {
        printf("%c\n", str[i]);
        str[i] = s1[i];
        i++;
    }
    
    // j = 0;
    // while (s2[j] != '\0')
    //     str[i] = s2[j];
    //     i++;
        // j++;

    return (str);
}

int main(){
    char *test1 = "Du";
    char *test2 = " Mongo";
    char *test = ft_strjoin(test1, test2);
    printf("%s", test);
}