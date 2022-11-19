#include <unistd.h>
char	*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (start);
}
int main(void)
{
    char str[] = "HOLA 77";

    char *result = ft_strlowcase(str);

    write(1,result, sizeof result);
}

