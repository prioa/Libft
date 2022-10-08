#include<string.h>
#include<stdio.h>

void    *ft_memset(void *b, int c, size_t len)
{
    size_t i;

    i = 0;
    while (i < len)
    {
        *(unsigned char *)(b+i) = (unsigned char)c;
        i++;
    }
    return (b);
}

int main()
{
    char *str = "Bist du dumm?";
    printf("%s\n", ft_memset(str, 'a', '5'));
}