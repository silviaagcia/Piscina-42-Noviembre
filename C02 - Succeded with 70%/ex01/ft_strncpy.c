/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:17:17 by laumoral          #+#    #+#             */
/*   Updated: 2022/11/13 12:25:21 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && src[count])
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
/*int main()
{
    char src[] ="Hola";// {'H', 'o', 'l', 'a'};1234567890abcde!!?¿
    char dest[5];
    dest[4] = 9;
    
    ft_strncpy(dest,src,1);
    printf("%s", dest);
    return(0);
}*/
