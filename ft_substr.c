#include<stdio.h>
#include<stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t     i;

    // add 1 for nullbyte
    substr = (char*)malloc(sizeof(*s) * (len + 1));

    i = 0;
    while (len > i)
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = 0; 
    return (substr);
}

int main()
{
    char *test = "Halt deine freeesseeeee";
    printf("result: %s\n", ft_substr(test, 5, 3));
}