#include <stdio.h>

int	ft_strlen(char *str)
{
    int		len;

    len = 0;
    while (str[len] != '\0')
        len++;
	return (len);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int count;
    unsigned int x;

    x = ft_strlen(src);
    count = 0;

    if (size)
    {
        while (src[count] && count < size -1)
        {
            dest[count] = src[count];
            count++;
        }
        dest[count] = src[count];
    }
    return (x);
}

int main ()
{
    char src[] = "syXavYM";
    char dest[] = "Hola";

    printf("%d | %s", ft_strlcpy(dest, src, 10), dest);
    return (0);
 }