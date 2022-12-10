#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t i;
    char *str;

    if (!s)
        return (0);

    i = 0;
    str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (str == 0)
        return (0);

    while(s[i] != '\0')
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}