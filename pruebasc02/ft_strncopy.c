#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && src[count])
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
int main()
{
    char src[] ="Hola";// {'H', 'o', 'l', 'a'};1234567890abcde!!?¿
    char dest[];
    //char dest[5];
    //dest[4] = 9;
    
    ft_strncpy(dest,src,4);
    printf("%s", dest);
    return(0);
}
