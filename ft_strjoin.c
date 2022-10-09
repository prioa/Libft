#include<stdio.h>
#include<stdlib.h>



size_t		ft_strlen(const char *s)
{
	int i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}




char *ft_strjoin(char const *s1, char const *s2)
{
    char *result;
    size_t i;
    size_t s1_length;
    size_t s2_length;
    size_t result_length;

    s1_length = ft_strlen(s1);
    s2_length = ft_strlen(s2);
    result_length = s1_length + s2_length + 1;

    result = malloc(sizeof(char *) * result_length);

    while (s1_length >= 0){
        result[i] = s1[i];
        s1_length--;
    }

    return (result);

}


int main()
{
    char *s1 = "Hey";
    char *s2 = "du";

    printf("%s\n", ft_strjoin(s1, s2));

}