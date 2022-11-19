#include <unistd.h>

int	ft_strlen(char *str)
{
    int		len;
    char	out;

    len = 0;
    while (str[len] != '\0')
    {
        len++;
    }

    out = len + '0';

    write(1, &out, 1);
    write(1, "\n", 2);
	return (len);
}

int main ()
{
    char *str;
    str = "Hola";
    ft_strlen(str);
    return (0);
}