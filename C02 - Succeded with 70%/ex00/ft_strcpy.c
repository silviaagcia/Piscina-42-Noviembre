/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:06:40 by laumoral          #+#    #+#             */
/*   Updated: 2022/11/13 12:15:08 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count])
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = src[count];
	return (dest);
}

int main()
{
    char src[] ="Hola";// {'H', 'o', 'l', 'a'};1234567890abcde!!?¿
    char dest[5]; //char dest[5];
    //dest[4] = 9;

    ft_strcpy(dest,src);
    printf("%s", dest);
    return(0);
}
