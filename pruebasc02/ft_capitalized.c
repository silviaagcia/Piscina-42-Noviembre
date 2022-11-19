
#include <stdio.h>

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

char	*ft_strcapitalize(char *str)
{
	int		firstletter;
	char	*start;

	start = str;
	firstletter = 1;
	ft_strlowcase(str);
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			if (firstletter == 1)
			{
				*str -= 32;
				firstletter = 0;
			}
		}
		else if (*str >= '0' && *str <= '9')
			firstletter = 0;
		else
			firstletter = 1;
		str++;
	}
	return (start);
}

int main()
{
	char strA [] = "SALUT, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	//char strB[] = "hola mundo en 42madrid";



	printf("%s", ft_strcapitalize(strA));
	//printf("\n%s", ft_strcapitalize(strB));
	return (0);
}